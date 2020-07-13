#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){

    // 3.6 Use a range for to change all the characters in a string to X
    string  str1 = "this is a lowercase string.";

    // Create for loop for each char in str1
    // Use reference to directly change characters of str1 through c
    // &c is char, but can use auto to detect type
    for( auto &c : str1){
        // True if c is a letter
        if(isalpha(c)){
            // Converts c to uppercase
            c = toupper(c);
        }
    }
    // Print out str1
    cout << str1 << endl;

    // 3.7 What happens if  you use char c instead of auto c?
    // (not sure why it would assume I'm not using char.
    //   also not sure if it means char as opposed to char& .)
    
    str1 = "this is a lowercase string.";

    // Result should be the same here
    for( char &c : str1){
        // True if c is a letter
        if(isalpha(c)){
            // Converts c to uppercase
            c = toupper(c);
        }
    }
    // Print out str1
    cout << str1 << endl;

       str1 = "this is a lowercase string.";

    // str1 should be unchanged and print as lowercase here, when
    //  c is not a reference, but an independent char variable whose
    //  scope is within the for loop.
    for( char c : str1){
        // True if c is a letter
        if(isalpha(c)){
            // Converts c to uppercase
            c = toupper(c);
        }
    }
    // Print out str1
    cout << str1 << endl;

    // 3.8 Rewrite 3.6 using a while and traditional for loop.
    //     Which do you like better and why?

    // Reassign str1 just for readability of code.
    str1 = "this is a lowercase string.";

    // Create a count variable with type string::size_type,
    //  so that we know it will be comparible with str1.size()
    decltype(str1.size()) n = 0;
    // alternatively
    // string::size_type n = 0;
    
    // Now loop through, ending the while when we reach the last
    // element of the string (str1.size - 1)
    while(n != str1.size()){
        if(isalpha(str1[n])){
            str1[n] = toupper(str1[n]);
        }
        ++n;
    }
    
    cout << str1 << endl;
    // Now do it with a for loop
    str1 = "this is a lowercase string.";

    // Basically same as while logic, but with different syntax
    for( string::size_type n = 0; n != str1.size(); ++n){
        if(isalpha(n)){
            str1[n] = toupper(n);
        }
    }

    cout << str1 << endl;

    // 3.9 Is the following valid? Why or Why not?

    // string s;
    // cout << s[0] << endl;

    // No, uninitialized strings are empty strings.
    // s[0] is trying to access memory beyond that of s1, and
    // thus its behavior is undefined.

    // 3.10 Write a program that reads a string of characters including
    //      punctuation and writes what was read but with the punctuation
    //      removed.

    str1 = "this, is, a . string! with? punc*tu#ation...";

    for( char c : str1){
        if(!ispunct(c)){
            cout << c;
        }
    }
    cout << endl;

    // Is the following range for legal? If so, what is the type of c?
    const string s = "Keep Out!";
    for (auto &c : s){/* */}

    // Is legal. Type of c is a const char &
}