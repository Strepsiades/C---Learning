//Exercise 7.3: Revise your transaction-processing program from § 7.1.1 (p.
//256) to use these members.

#include <iostream>
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

Sales_data& Sales_data::combine(const Sales_data& rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    //return *this;
    Sales_data& result = *this;
    return result;
}

int main(){
    Sales_data sales_data1;
    double price;
    cout << "enter isbn, units sold and average price\n";
    cin >> sales_data1.bookNo >> sales_data1.units_sold >> price;
    sales_data1.revenue = price * sales_data1.units_sold;

    cin.clear();
    cin.ignore(100, '\n');


    Sales_data sales_data2;
    cout << "enter isbn, units sold and average price for another book\n";
    cin >> sales_data2.bookNo >> sales_data2.units_sold >> price;
    sales_data2.revenue = price * sales_data2.units_sold;


    cout << sales_data1.isbn() << " " << sales_data2.isbn() << endl;
    sales_data1.combine(sales_data2);
    cout << sales_data1.units_sold << " " << sales_data1.revenue << endl;

}