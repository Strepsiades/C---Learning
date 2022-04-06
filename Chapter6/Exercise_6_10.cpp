//Exercise 6.10: Using pointers, write a function to swap the values of two
//ints. Test the function by calling it and printing the swapped values.

#include <iostream>

using namespace std;

void swap(int* p, int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    int a, b;
    cin >> a >> b;
    int* p = &a;
    int* q = &b;
    swap(p, q);
    cout << a << " " << b << endl;
}