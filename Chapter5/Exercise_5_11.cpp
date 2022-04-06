//Exercise 5.11: Modify our vowel-counting program so that it also counts the
//number of blank spaces, tabs, and newlines read.

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){
    // initialize counters for each vowel
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned blankSpaceCnt = 0, tabCnt = 0, newLineCnt = 0;
    char ch;
    while (cin.get(ch)) {
        // if ch is a vowel, increment the appropriate counter
        switch (ch) {
            case 'a':case 'A':
                ++aCnt;
                break;
            case 'e':case 'E':
                ++eCnt;
                break;
            case 'i':case 'I':
                ++iCnt;
                break;
            case 'o':case 'O':
                ++oCnt;
                break;
            case 'u':case 'U':
                ++uCnt;
                break;
            case ' ':
                ++blankSpaceCnt;
                break;
            case '\n':
                ++newLineCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
        }
    }
    // print results
    cout << "Number of vowel a: \t" << aCnt << '\n'
    << "Number of vowel e: \t" << eCnt << '\n'
    << "Number of vowel i: \t" << iCnt << '\n'
    << "Number of vowel o: \t" << oCnt << '\n'
    << "Number of vowel u: \t" << uCnt << '\n'
    << "Number of blank space: \t" << blankSpaceCnt << '\n'
    << "Number of tab: \t" << tabCnt << '\n'
    << "Number of new line: \t" << newLineCnt << endl;
}