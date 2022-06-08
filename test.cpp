#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s = "abcadv";
    sort(s.begin(), s.end());
    for (auto c : s) {
        cout << c;
    }
}