/*Exercise 10.1: The algorithm header defines a function named count
that, like find, takes a pair of iterators and a value. count returns a count
of how often that value appears. Read a sequence of ints into a vector
and print the count of how many elements have a given value.*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "type in an array of numbers:" << endl;
    int num;
    vector<int> v;
    while(cin >> num) {
        v.push_back(num);
    }
    cout << "type in a number you want to count:" << endl;
    int target;
    cin.clear();
    cin >> target;
    int cnt= count(v.begin(), v.end(), target);
    cout << endl << cnt;

}