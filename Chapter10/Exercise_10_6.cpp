//Exercise 10.6: Using fill_n, write a program to set a sequence of int
//values to 0.

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> v {1, 2, 3 ,4 ,5};
    fill_n(v.begin(), v.size(), 0);
    for (auto i : v) {
        cout << i << " ";
    }
}