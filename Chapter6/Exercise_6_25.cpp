//Exercise 6.25: Write a main function that takes two arguments.
//Concatenate the supplied arguments and print the resulting string.
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* *argv){
    string args;
    for (int i = 0; i < argc; i++){
        args+= argv[i];
    }
    cout << args << endl;
}