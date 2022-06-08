//Exercise 7.9: Add operations to read and print Person objects to the code
//you wrote for the exercises in § 7.1.2 (p. 260).

#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    string address;
    void print() const;
};

void Person::print() const {
    std::cout << name << "\n" << address << std::endl;
}

ostream& print(ostream& os, const Person& p){
    os << p.name << " " << p.address << " ";
    return os;
}

istream& read(istream& is, Person& p){
    cout << "Enter person's name and address, seperated by comma.\n";
    is >> p.name >> p.address;
    return is;
}


int main(){
    Person p;
    read(cin, p);
    print(cout, p);
}