#include<iostream>
using namespace std;

// Write a program that changes the value of a pointer
// then changes the value associated with that pointer.
int main(){
    int i = 19;
    int j = 22;
    int* p = &i;

    cout << "The address of p is " << p << endl;

    p = &j;

    cout << "Now the address of p is " << p << endl;
    cout << "The value associated with p is " << *p << endl;

    *p = 44;

    cout << "The address of p is still " << p <<
            ", but now the value associated with p"
            " is " << *p << endl;
}