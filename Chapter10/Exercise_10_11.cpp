//Exercise 10.11: Write a program that uses stable_sort and isShorter
//to sort a vector passed to your version of elimDups. Print the vector to
//verify that your program is correct.

#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool isShorter(string a1, string a2) {
    if (a1.size() < a2.size()) return true;
    return false; 
}

int main() {
    string word;
    vector<string> v;
    while (cin >> word) {
        v.push_back(word);
    }

    stable_sort(v.begin(), v.end(), isShorter);
    auto unique_end = unique(v.begin(), v.end());
    v.erase(unique_end, v.end());

    for (auto i : v) {
        cout << i << " ";
    }
}