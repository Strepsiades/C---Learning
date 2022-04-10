//Exercise 6.51: Write all four versions of f. Each function should print a
//distinguishing message. Check your answers for the previous exercise. If your
//answers were incorrect, study this section until you understand why your
//answers were wrong.

#include <iostream>

using namespace std;

void f();
void f(int);
void f(int, int);
//void f(double, double = 3.14);

void f(){
    cout << __LINE__ << endl;
}

void f(int a){
    cout << __LINE__ << endl;
}

void f(int a, int b){
    cout << __LINE__ << endl;
}

void f(double a, double b = 3.14){
    cout << __LINE__ << endl;
}

int main(){
    //f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
}