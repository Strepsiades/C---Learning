//Exercise 5.21: Revise the program from the exercise in § 5.5.1 (p. 191) so
//that it looks only for duplicated words that start with an uppercase letter.

#include <iostream>
#include <string>

using std::string;
using std::cin;

int main(){
    string lastword;
    string currword;

    if (cin >> lastword) {
        while (cin >> currword){
            if (lastword == currword) {     
                //if the duplicated words start with an uppercase letter.
                char c = *lastword.begin();
                if (isalpha(c) && isupper(c)){
                    break;
                }
                    
            }
            lastword = currword;
        }
    }
    std::cout << currword <<std::endl;
}