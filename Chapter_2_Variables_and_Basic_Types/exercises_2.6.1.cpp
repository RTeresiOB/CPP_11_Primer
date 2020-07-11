#include<iostream>
using namespace std;

// Define a simple struct and print out its contents
struct Sales_data {
    std::string bookNo = "7BDDSQH4758B";
    unsigned units_Sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data blah;
    cout << blah.bookNo << "\n" << blah.units_Sold <<
     "\n" << blah.revenue << endl;
    return 0;
}
