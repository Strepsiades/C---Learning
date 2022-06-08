//Exercise 6.5: Write a function to return the absolute value of its argument.

#include <iostream>

using namespace std;

int abs1(int a){
    if (a >= 0) return a;
    else return -a;
}
int main(){
    int a;
    cin >> a;
    cout << abs1(a) << endl;
}