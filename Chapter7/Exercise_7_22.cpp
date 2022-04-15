//Exercise 7.22: Update your Person class to hide its implementation.

//Exercise 7.15: Add appropriate constructors to your Person class.

#include <iostream>
#include <string>

using namespace std;

class Person {
    friend ostream& print(ostream& os, const Person& p);
    friend istream& read(istream& is, Person& p);
    
    public:
        //constructors
        Person() = default;
        Person(const string &name, const string &address):name(name), address(address){}
        Person(istream& is);
        
        //member functions:
        void print() const;
    private:
        string name;
        string address;
        
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

Person::Person(istream& is){
    read(is, *this);
}


int main(){
    Person p("XiaoMing", "beijing");
    Person p2(cin);

}