//Exercise 6.23: Write your own versions of each of the print functions
//presented in this section. Call each of these functions to print i and j
//defined as follows:
//int i = 0, j[2] = {0, 1};

#include <iostream>
#include <iterator>

using namespace std;

void print(int a){
    cout << a << endl;
}

void print(int *beg, int *end){
    for(int *curr = beg; curr != end; curr++){
        cout << *curr << endl;
    }
}

int main(){
    int i = 0;
    int j[2] = {0, 1};
    print(i);
    print(begin(j), end(j));
}