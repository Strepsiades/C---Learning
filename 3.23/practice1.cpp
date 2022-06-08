#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
  Sales_item book;
  while (std::cin >> book) {
        std::cout << book << "\n";
   }
//   	for (Sales_item item; cin >> item; cout << item << endl);
//	return 0;
}