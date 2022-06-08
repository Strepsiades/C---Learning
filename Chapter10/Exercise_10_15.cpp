//Exercise 10.15: Write a lambda that captures an int from its enclosing
//function and takes an int parameter. The lambda should return the sum of
//the captured int and the int parameter.

#include <iostream>
using namespace std;

int getSum() {
    int a = 15;
    return [a](int b) {return a + b;}(13);
}

int main() {
    cout << getSum() << endl;
}