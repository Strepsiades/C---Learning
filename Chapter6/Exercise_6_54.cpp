//Exercise 6.54: Write a declaration for a function that takes two int
//parameters and returns an int, and declare a vector whose elements have
//this function pointer type.
#include <vector>;


int main(){
    int func(int, int);

    using funcType = int (int, int);

    std::vector<funcType*> v;
    
}


