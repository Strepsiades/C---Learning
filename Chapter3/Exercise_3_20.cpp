/*Exercise 3.20: Read a set of integers into a vector. Print the sum of each
pair of adjacent elements. Change your program so that it prints the sum of
the first and last elements, followed by the sum of the second and second-to-
last, and so on.*/

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

int main(){
    //read input into vector v;
    vector<int> v;
    int curr;
    while(std::cin >> curr) {
        v.push_back(curr);
    }
    //adding pairs and save the results to v1; adding pairs of the first and the last to v2;
    vector<int> v1;
    if (v.size() < 2) {
        std::cout << "Too Short Integers";
    }
    else {
        for (decltype(v.size()) i = 0; i < v.size() - 1; ++i){
            v1.push_back(v[i] + v[i+1]);
        }
        for (auto i : v1) {
            std::cout << i << " ";
        }
    
    }
}
