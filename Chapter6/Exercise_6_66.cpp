//Exercise 6.56: Call each element in the vector and print their result.

#include<vector>
#include<iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int substract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    return a / b;
}

using funcType = decltype(add);

int main(){
    vector<funcType*> v {&add, &substract, &multiply, &divide};
    cout << (*v[0])(1, 2) << endl
        << v[1](1, 2) << endl
        << v[2](1, 2) << endl
        << v[3](1, 2) << endl;
}
