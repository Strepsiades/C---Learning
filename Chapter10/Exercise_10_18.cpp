//Exercise 10.18: Rewrite biggies to use partition instead of find_if.
//We described the partition algorithm in exercise 10.13 in § 10.3.1 (p.
//387).

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void biggies(vector<string> &v, vector<string>::size_type sz) {
// print words of the given size or longer, each one followed by a space
    auto greaterThan = partition(v.begin(), v.end(), [sz](string s) {return s.size() < sz;});
    for_each(greaterThan, v.end(), [](string s){
        cout << s << " ";
    });
}

int main() {
    vector<string> v {"sdf", "sdfsdf", "sfadsfsdfsdfsdf", "sdfsdfsd", "word", "chinaware"};
    biggies(v, 5);
}