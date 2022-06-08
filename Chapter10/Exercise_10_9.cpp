//Exercise 10.9: Implement your own version of elimDups. Test your
//program by printing the vector after you read the input, after the call to
//unique, and after the call to erase.

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    string word;
    vector<string> v;
    while (cin >> word) {
        v.push_back(word);
    }

    sort(v.begin(), v.end());
    auto unique_end = unique(v.begin(), v.end());
    v.erase(unique_end, v.end());

    for (auto i : v) {
        cout << i << " ";
    }

}