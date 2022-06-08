//Exercise 7.4: Write a class named Person that represents the name and
//address of a person. Use a string to hold each of these elements.
//Subsequent exercises will incrementally add features to this class.

#include <iostream>
#include <string>

using std::string;

struct Person {
    string name;
    string address;
};

int main(){
    Person jack;
    jack.name = "jack";
    jack.address = "New York";
    std::cout << jack.name << " " << jack.address << std::endl;
}