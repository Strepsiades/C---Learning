//Exercise 7.5: Provide operations in your Person class to return the name
//and address. Should these functions be const? Explain your choice.

#include <iostream>
#include <string>

using std::string;

struct Person {
    string name;
    string address;
    void print() const;
};

void Person::print() const {
    std::cout << name << "\n" << address << std::endl;
}

int main(){
    Person jack;
    jack.name = "jack";
    jack.address = "New York";
    jack.print();
}