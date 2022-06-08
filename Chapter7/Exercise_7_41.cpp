//Exercise 7.41: Rewrite your own version of the Sales_data class to use
//delegating constructors. Add a statement to the body of each of the
//constructors that prints a message whenever it is executed. Write
//declarations to construct a Sales_data object in every way possible. Study
//the output until you are certain you understand the order of execution among
//delegating constructors.

class Sales_data {
public:
    // model contructor
    Sales_data(std::string s, unsigned cnt, double rev):

    //delegate constructors
    
    Sales_data(s): bookNo(s):Sales_data(s, 0, 0) { };
    Sales_data(std::istream &is) { read(is, *this); }
    // remaining members as before
};