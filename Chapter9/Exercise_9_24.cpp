//Exercise 9.24: Write a program that fetches the first element in a vector
//using at, the subscript operator, front, and begin. Test your program on
//an empty vector.

#include <vector>

using namespace std;

int main() {
    vector<int> v;
    //auto i = v.at(0);
    //auto i = v[0];
    auto i = *(v.begin());
    //auto i = v.front();
}