//Exercise 3.32: Copy the array you defined in the previous exercise into
//another array. Rewrite your program to use vectors.

#include <iostream>
#include <vector>

using std::vector;

int main(){
    vector<int> v(10);
    for (auto it = v.begin(); it != v.end(); ++it) {
        v[it - v.begin()] = it - v.begin();
        std::cout << v[it - v.begin()] << " ";
    }
    std::cout << std::endl;

}