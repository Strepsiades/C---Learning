/*
Exercise 10.30: Use stream iterators, sort, and copy to read a sequence
of integers from the standard input, sort them, and then write them back to
the standard output.
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
    copy(v.cbegin(), v.cend(), out);
    
}