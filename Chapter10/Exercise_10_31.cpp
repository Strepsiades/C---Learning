/*
Exercise 10.31: Update the program from the previous exercise so that it
prints only the unique elements. Your program should use unqiue_copy (§
10.4.1, p. 403).
*/

#include<string>
#include<vector>
#include<iostream>
#include<iterator>
#include<algorithm>

using namespace std;

int main() {
    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> out(cout, " ");
    vector<int> v (in_iter, eof);
    sort(v.begin(), v.end());
    unique_copy(v.cbegin(), v.cend(), out);
    
}