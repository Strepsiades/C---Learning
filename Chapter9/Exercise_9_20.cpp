//Exercise 9.20: Write a program to copy elements from a list<int> into
//two deques. The even-valued elements should go into one deque and the
//odd ones into the other.

#include<string>
#include<list>
#include<deque>
#include<iostream>

using namespace std;

int main() {
    list<int> l;
    int num;
    while(cin >> num) {
        l.push_back(num);
    }
    deque<int> d1;
    deque<int> d2;
    for (auto it = l.begin(); it != l.end(); it++) {
        if (*it % 2 == 0) {
            d1.push_back(*it);
        }
        else d2.push_back(*it);
    }
    for (auto it = d1.begin(); it != d1.end(); it++) {
        cout << *it << endl;
    }
    

}