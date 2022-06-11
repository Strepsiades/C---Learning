//Exercise 11.3: Write your own version of the word-counting program.

#include <map>
#include <set>
#include <iterator>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    map<string, int> wordCount;
    set<string> ignore = {"a", "the", "an", "of", "to", "as"};
    istream_iterator<string> in_iter(cin), eof;
    for (auto it = in_iter; it != eof;) {
        //cout << 1 << endl;
        string word = *it++;
        if (ignore.find(word) == ignore.end()) {
            wordCount[word] += 1;
        } 
    }
    cout << 2 << endl;
    for_each(wordCount.begin(), wordCount.end(), [](pair<string, int> p){cout << p.first << " " << p.second << endl;});
}
