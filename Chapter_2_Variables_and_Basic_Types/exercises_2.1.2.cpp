#include<iostream>

using namespace std;

//////////////////////////////////////////////////////////
// Working with signed and unsigned ints.
//
// What will be the results of the following expressions?
//
// Take a "guess" then run program to find out if you were correct
//////////////////////////////////////////////////////////

int main(){
    unsigned int u = 10, u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;
    
    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;
    return 0;
}