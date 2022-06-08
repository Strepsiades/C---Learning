//Exercise 9.27: Write a program to find and remove the odd-valued
//elements in a forward_list<int>.

#include<forward_list>
#include<iostream>

using namespace std;

int main() {
    forward_list<int> fl {1,2,3,4,5,6,7,8,9,10};
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if ((*curr) % 2 == 1) {
            curr++;
            fl.erase_after(prev);
            
               
        }
        else {
            prev++;
            curr++;
        }
    }
    for (auto i : fl) {
        cout << i << endl;
    }
}