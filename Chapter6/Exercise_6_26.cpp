//Exercise 6.26: Write a program that accepts the options presented in this
//section. Print the values of the arguments passed to main.
#include <iostream>
 
using namespace std;

int main(int argc, char* *argv){
    cout << "all" << (argc > 1 ? " arguments are:\n" : " argument is\n");
    for (int i = 1; i < argc; i++){
        cout << "\t" << argv[i];
    }
}