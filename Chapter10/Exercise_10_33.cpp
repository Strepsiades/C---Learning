/*
Exercise 10.33: Write a program that takes the names of an input file and
two output files. The input file should hold integers. Using an
istream_iterator read the input file. Using ostream_iterators, write
the odd numbers into the first output file. Each value should be followed by a
space. Write the even numbers into the second file. Each of these values
should be placed on a separate line.
*/

#include<string>
#include<vector>
#include<fstream>
#include<iterator>
#include<algorithm>

using namespace std;

int main() {
    ifstream ifs("input.txt");
    ofstream ofs1("out1.txt"), ofs2("out2.txt");
    istream_iterator<int> in_iter(ifs), eof;
    ostream_iterator<int> out1(ofs1, "\n"), out2(ofs2, "\n");
    copy_if(in_iter, eof, out1, [](int n){return n % 2 != 0;});
    copy_if(in_iter, eof, out2, [](int n){return n % 2 == 0;});
    /*
    while(in_iter != eof) {
        auto n = *in_iter++;
        if (n % 2 != 0) {
            *out1++ = n;
        }
        else *out2++ = n;
    }
    */
}