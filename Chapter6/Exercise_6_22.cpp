//Exercise 6.22: Write a function to swap two int pointers.
#include <iostream>

void swap(int *(&p), int *(&q)){
    int *temp = p;
    p = q;
    q = temp;
}

int main(){
    int valp = 1, valq = 2;
    int *p = &valp, *q = &valq;
    swap(p, q);
    std::cout << *p << " " << *q;

}