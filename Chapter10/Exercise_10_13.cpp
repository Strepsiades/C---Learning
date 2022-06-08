/*Exercise 10.13: The library defines an algorithm named partition that
takes a predicate and partitions the container so that values for which the
predicate is true appear in the first part and those for which the predicate is
false appear in the second part. The algorithm returns an iterator just past
the last element for which the predicate returned true. Write a function that
takes a string and returns a bool indicating whether the string has five
characters or more. Use that function to partition words. Print the elements
that have five or more characters.*/

#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool isOdd(int i) {
    if (i % 2 != 0) return true;
    return false;
}

int main() {
    vector<int> v {1, 3, 2, 5, 6, 4, 3, 2, 6, 7, 8,9,0 ,1,3,4,5,6};
    auto edge = partition(v.begin(), v.end(), isOdd);
    for (auto i : v) {
        cout << i << " ";
    }
}