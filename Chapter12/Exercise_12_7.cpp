// Exercise 12.7: Redo the previous exercise, this time using shared_ptr.

#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <memory>

using namespace std;

shared_ptr<vector<int>> createVec(){ 
    return make_shared<vector<int>> ();
}

void read(vector<int> & vec) {
    istream_iterator<int> in_iter(cin), eof;
    vec.assign(in_iter, eof);
}

void write(shared_ptr<vector<int>> p) {
    ostream_iterator<int> out_iter(cout, " ");
    copy(p->begin(), p->end(), out_iter);
}

int main() {
    auto p = createVec();
    read(*p);
    write(p);
}