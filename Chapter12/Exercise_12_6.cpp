/*
Exercise 12.6: Write a function that returns a dynamically allocated vector
of ints. Pass that vector to another function that reads the standard input
to give values to the elements. Pass the vector to another function to print
the values that were read. Remember to delete the vector at the
appropriate time.
*/

#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
vector<int>* creatVec () {
    auto p = new vector<int>();
    return p;
}

void read(vector<int> & vec) {
    istream_iterator<int> in_iter(cin), eof;
    vec.assign(in_iter, eof);
}

void write(vector<int> * p) {
    ostream_iterator<int> out_iter(cout, " ");
    copy(p->begin(), p->end(), out_iter);
}

int main() {
    auto p = creatVec();
    read(*p);
    write(p);
    delete p;
    p = nullptr;
}