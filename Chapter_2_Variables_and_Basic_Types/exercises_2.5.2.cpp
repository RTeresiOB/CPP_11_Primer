#include<iostream>
#include <typeinfo>

using namespace std;

const int i = 0; // i is const int
auto j = i;  // j is int

const auto &k = i;   // K is reference to const int i
auto *p = &i;  // P is a pointer to a const int
const auto j2 = i, &k2 = i; // j2 is a const int, k2 is a reference to const int i
int main(){
    // Cannot figire out how to get c++ to print type name.
    return 0;
}