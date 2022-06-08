//Exercise 10.24: Use bind and check_size to find the first element in a
//vector of ints that has a value greater than the length of a specified
//string value.

#include<string>
#include<vector>
#include<functional>
#include<iostream>
#include<algorithm>

using namespace std;
using namespace placeholders;

bool check_size(int num, int svalue) {
    return num > svalue;
}

int main() {
    vector<int> nums {15, 32, 45, 32, 12, 12,34, 30};
    auto first = find_if(nums.cbegin(), nums.cend(), bind(check_size, _1, 30));
    cout << *first << endl;
}