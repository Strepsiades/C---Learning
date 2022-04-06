#include <iostream>
using namespace std;

int fact(int a){
    int result = 1;
    while (a > 1) {
        result = result * a--;
    }
    return result;
}
int main(){
    int a;
    cin >> a;
    cout << fact(a) << endl;

}