/*Exercise 10.20: The library defines an algorithm named count_if. Like
find_if, this function takes a pair of iterators denoting an input range and
a predicate that it applies to each element in the given range. count_if
returns a count of how often the predicate is true. Use count_if to rewrite
the portion of our program that counted how many words are greater than
length 6.*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words {"aloha", "beta", "gamma", "cloth", "chinaware", "physics"};
    int length = 5;
    int cnt = count_if(words.begin(), words.end(), [length](string word)->bool{return word.size() >= 5;});
    cout << cnt << endl;
}
