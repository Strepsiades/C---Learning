#include<string>
#include<iostream>

using namespace std;

int main(){
    int i;
    cin >> i;
    cin.clear(cin.rdstate());
    cout << cin.rdstate();
}