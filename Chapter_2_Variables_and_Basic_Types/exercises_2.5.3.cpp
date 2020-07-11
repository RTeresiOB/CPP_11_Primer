#include<iostream>

using namespace std;

int main(){
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;

    cout << "The value of a is:" << a << "\n"
     " The value of d is:" << d << endl; // a and d both equal to 3
 }