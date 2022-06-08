//Exercise 3.22: Revise the loop that printed the first paragraph in text to
//instead change the elements in text that correspond to the first paragraph
//to all uppercase. After you’ve updated text, print its contents.

#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
    vector<string> v;
    string curr;
    while(cin >> curr) {
        v.push_back(curr);
    }
    for (auto it = v.begin(); it != v.end(); ++it) {
        string &s = *it;
        for (auto it2 = s.begin(); it2 != s.end(); ++it2){
            if (isalpha(*it2)){
                *it2 = toupper(*it2);
            }
         }
    }

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

}