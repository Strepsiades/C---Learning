//Exercise 6.47: Revise the program you wrote in the exercises in § 6.3.2 (p.
//228) that used recursion to print the contents of a vector to conditionally
//print information about its execution. For example, you might print the size of
//the vector on each call. Compile and run the program with debugging
//turned on and again with it turned off.

#include <iostream>
#include <vector>

using namespace std;

void recurPrint(vector<int>::iterator beg, vector<int>::iterator end){
    cout <<*beg << endl;

    //for debug
    #ifndef NDEBUG
    cout << "In function " << __func__ << endl;
    cout << "size of the vector is " << end - beg << endl;
    cout << "in File " << __FILE__ << endl;
    cout << "at Line " << __LINE__ << endl;
    cout << "at time "  << __TIME__ << endl;
    #endif



    if (end - beg > 1) {
        recurPrint(beg+1, end);
    }
}

int main(){
    vector<int> v {1, 2, 3, 4 ,5 ,6};
    recurPrint(v.begin(), v.end());
}