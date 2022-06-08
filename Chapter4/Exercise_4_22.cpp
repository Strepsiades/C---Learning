//Exercise 4.22: Extend the program that assigned high pass, pass, and fail
//grades to also assign low pass for grades between 60 and 75 inclusive. Write
//two versions: One version that uses only conditional operators; the other
//dshould use one or more if statements. Which version do you think is easier
//to understand and why?

#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main(){
    vector<int> v {10, 20, 30, 40, 50, 60, 70, 80, 88, 90, 100};
    for (int i : v) {
        i >= 90 ? cout << i << " high pass\n" : i >= 60 && i <= 75 ? cout << i << " low pass\n" : i > 75 ? cout << i <<" pass\n": cout << i << " not pass\n";
    } 
    //use one or more if
    for ()  
}