#include<iostream>
#include<string>
#include "sales_data.h"

using namespace std;

int main()
{
    sales_data data1, data2;

    double price = 0.; // "Price of book"
    //  read the first transactions: ISBN, number of books sold, price per book
    std::cin >> data1.bookNo >> data1.units_Sold  >> price;
    data1.revenue = data1.units_Sold * price;
    cout << "Total revenue:" << data1.revenue << endl;
    return 0;
}

