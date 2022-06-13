/*Exercise 11.4: Extend your program to ignore case and punctuation. For
example, “example.” “example,” and “Example” should all increment the same
counter.*/

#include <map>
#include <set>
#include <iterator>
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    map<string, int> wordCount;
    set<string> ignore = {"a", "the", "an", "of", "to", "as"};
    istream_iterator<string> in_iter(cin), eof;
    for (auto it = in_iter; it != eof;) {
        //cout << 1 << endl;
        string word = *it++;
        while (!isalpha(word.back())) word.pop_back();
        for_each(word.begin(), word.end(), [](char c){tolower(c);});        
        if (ignore.find(word) == ignore.end()) {
            wordCount[word] += 1;
        }  
    }
    cout << 2 << endl;
    for_each(wordCount.cbegin(), wordCount.cend(), [](pair<string, int> p){cout << p.first << " " << p.second << endl;});
}
