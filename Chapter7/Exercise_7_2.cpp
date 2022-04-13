//Exercise 7.2: Add the combine and isbn members to the Sales_data
//class you wrote for the exercises in § 2.6.2 (p. 76).

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

    