//Exercise 6.7: Write a function that returns 0 when it is first called and then
//generates numbers in sequence each time it is called again.
#include <iostream>
using namespace std;

int numcall(){
    static int cnt = 0;
    return cnt++;
}
int main(){
    for (int index = 0; index < 10; index++){
        cout << numcall() << endl;
    }
}