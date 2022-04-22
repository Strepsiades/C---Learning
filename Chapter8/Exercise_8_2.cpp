//Exercise 8.2: Test your function by calling it, passing cin as an argument.

#include<iostream>

using namespace std;

istream& read(istream& is){
    int i = 0;
    while(!is.eof()){
        cin >> i;
        cout << i << endl;
    }
    is.clear();
    return is;
}

int main(){
    read(cin);
}