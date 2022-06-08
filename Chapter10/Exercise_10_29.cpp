/*
Exercise 10.29: Write a program using stream iterators to read a text file
into a vector of strings.
*/

#include<string>
#include<vector>
#include<iostream>
#include<fstream>
#include<iterator>
#include<algorithm>

using namespace std;

int main() {
    ifstream ifs("Exercise_10_28.cpp");
    istream_iterator<string> in_iter(ifs) , eof;
    vector<string> v (in_iter, eof);
    ostream_iterator<string> out(cout, " ");
    copy(v.cbegin(), v.cend(), out);
        
}