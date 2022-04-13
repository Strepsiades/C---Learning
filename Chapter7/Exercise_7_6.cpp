//Exercise 7.6: Define your own versions of the add, read, and print
//functions.
#include<iostream>

using namespace std;

struct Sales_data {
    // new members: operations on Sales_data objects
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    // data members are unchanged from § 2.6.1 (p. 72)
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


istream read(istream &is, Sales_data data){
    double price;
    is >> data.isbn() >> data.units_sold >> price;
    data.revenue = price * data.units_sold;
    return is;
}

ostream write(ostream &os, Sales_data data){
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