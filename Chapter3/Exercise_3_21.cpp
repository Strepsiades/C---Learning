// Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105) using iterators.
#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for (auto it = v.begin(); it != v.end(); ++it) 
        *it *= *it; // square the element value
    for (auto it = v.cbegin(); it != v.cend(); ++it) 
        cout << *it << " "; // print the element
    cout << endl;
}
