#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>

struct sales_data
{
    std::string bookNo;
    unsigned units_Sold = 0;
    double revenue = 0.0;
};
#endif
