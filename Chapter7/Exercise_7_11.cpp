//Exercise 7.11: Add constructors to your Sales_data class and write a
//program to use each of the constructors.

#include<iostream>
#include<string>

using namespace std;

struct Sales_data {
    //constructors:
    Sales_data() = default;
    Sales_data(const string &s):bookNo(s){ }
    Sales_data(const string &s, unsigned u, double p):bookNo(s), units_sold(u), revenue(u*p){ }
    Sales_data(istream &);
    
    
    
    // new members: operations on Sales_data objects
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    // data members are unchanged from § 2.6.1 (p. 72)
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

istream& read(istream &is, Sales_data& data){
    double price;
    is >> data.bookNo >> data.units_sold >> price;
    data.revenue = price * data.units_sold;
    return is;
}

Sales_data::Sales_data(istream& is){
    read(is, *this);
}

ostream& print(ostream &os, const Sales_data& data){
    os << data.isbn() << " " << data.units_sold << " " << data.revenue;
    return os;
}

Sales_data add(const Sales_data& a, const Sales_data& b){
    Sales_data sum;
    sum.bookNo = a.isbn();
    sum.units_sold = a.units_sold + b.units_sold;
    sum.revenue = a.revenue + b.revenue;
    return sum;
}

int main(){
    Sales_data book(cin);
    Sales_data book2("90001", 10, 10);
    Sales_data sum = add(book, book2);
    print(cout, sum);
}