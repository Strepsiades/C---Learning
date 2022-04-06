//Exercise 5.12: Modify our vowel-counting program so that it counts the
//number of occurrences of the following two-character sequences: ff, fl,
//and fi.

#include <iostream>
#include <string>

using std::string;

int main(){
    char c1, c2;
    std::cin.get(c1);
    int ffCnt = 0, flCnt = 0, fiCnt = 0;
    while (std::cin.get(c2)){
        if (c1 == 'f'){
            switch (c2) {
                case 'f':
                    ffCnt++;
                    break;
                case 'l':
                    flCnt++;
                    break;
                case 'i':
                    fiCnt++;
                    break;
            }
        }
        c1 = c2;
    }
    std::cout 
    << "Number of ff: \t" << ffCnt << '\n'
    << "Number of fl: \t" << flCnt << '\n'
    << "Number of fi: \t" << fiCnt << std::endl;
}