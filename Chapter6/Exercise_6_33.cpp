//Exercise 6.33: Write a recursive function to print the contents of a vector.

#include <iostream>
#include <vector>

using namespace std;

void recurPrint(vector<int>::iterator beg, vector<int>::iterator end){
    cout << "\t" <<*beg;
    if (end - beg > 1) {
        recurPrint(beg+1, end);
    }
}

int main(){
    vector<int> v {1, 2, 3, 4 ,5 ,6};
    recurPrint(v.begin(), v.end());
}