//Exercise 10.42: Reimplement the program that eliminated duplicate words
//that we wrote in § 10.2.3 (p. 383) to use a list instead of a vector.

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    string word;
    istream_iterator<string> in_iter(cin), eof;
    list<string> l (in_iter, eof);
    l.sort();
    l.unique();
    ostream_iterator<string> out(cout, " ");
    copy(l.cbegin(), l.cend(), out);

}