//Exercise 6.17: Write a function to determine whether a string contains
//any capital letters. Write a function to change a string to all lowercase. Do
//the parameters you used in these functions have the same type? If so, why?
//If not, why not?

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool hasCapital(const string &s) {
    for (auto c : s){
        if (isalpha(c) && isupper(c)) 
            return 1;
    }
    return 0;
}

void tolowerString(string &s){
        for (auto &c : s){
        if (isalpha(c) && isupper(c)) 
            c = tolower(c);
    }
}

int main(){
    string s;
    getline(cin, s);

    cout << hasCapital(s) << endl;
    tolowerString(s);
    cout << s << endl;
}