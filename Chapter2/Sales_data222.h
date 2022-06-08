#ifndef SALES_DATA
#define SALES_DATA
#include <string>
struct Sales_data {
    std::string ISBN;
    unsigned BooksSold = 0;
    double revenue = 0;
};

#endif

