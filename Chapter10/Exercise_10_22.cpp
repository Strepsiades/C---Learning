//Exercise 10.22: Rewrite the program to count words of size 6 or less using
//functions in place of the lambdas.

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>

using namespace std;
using namespace placeholders;

bool hasSize(string word, int size) {
    return word.size() >= size;
}

int main() {
    vector<string> words {"aloha", "beta", "gamma", "cloth", "chinaware", "physics"};
    int length = 5;
    int cnt = count_if(words.begin(), words.end(), bind(hasSize, _1, 5));
    cout << cnt << endl;
}