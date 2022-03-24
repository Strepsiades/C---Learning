//Exercise 2.41: Use your Sales_data class to rewrite the exercises in §
//1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define
//your Sales_data class in the same file as your main function.

#include <iostream> 
#include <string>

struct Sales_data {
    std::string ISBN;
    unsigned int BooksSold = 0;
    double revenue = 0;
};

int main() {
    Sales_data data1, data2;
    // code to read into data1 and data2
    double price;
    std::cin >> data1.ISBN >> data1.BooksSold >> price;
    data1.revenue = price * data1.BooksSold;
    std::cin >> data2.ISBN >> data2.BooksSold >> price;
    data2.revenue = price * data2.BooksSold;

    // code to check whether data1 and data2 have the same ISBN
    // and if so print the sum of data1 and data2
    if (data1.ISBN == data2.ISBN) {
        double TotalRevenue = data1.revenue + data2.revenue;
        unsigned TotalBookSold = data1.BooksSold + data2.BooksSold;
        if (TotalBookSold == 0) {
            std::cout << "No Book Sold!";
        }
        else {
            double AveragePrice = TotalRevenue/TotalBookSold;
            std::cout << data1.ISBN << " " << TotalBookSold << " " << AveragePrice;
        }
         

    }
    else {
        std::cerr << "Not Same Book!\n";
    }


}