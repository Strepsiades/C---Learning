//Exercise 6.55: Write four functions that add, subtract, multiply, and divide
//two int values. Store pointers to these values in your vector from the
//previous exercise.

#include<vector>

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
}




