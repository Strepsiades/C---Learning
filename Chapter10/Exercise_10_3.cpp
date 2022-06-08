//Use accumulate to sum the elements in a vector<int>.

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int num;
    vector<int> nums;
    while (cin >> num) {
        nums.push_back(num);
    }
    int sum = accumulate(nums.cbegin(), nums.cend(), 0);
    cout << sum << endl;

}