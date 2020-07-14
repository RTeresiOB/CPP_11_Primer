#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    
    // 3.14 Write a program to read a sequence of ints from cin and store the
    //      values in a vector

    vector<int>  v1;
    int n;
    while(cin >> n){
        v1.push_back(n);
    }
    cout << "Here is our vector! \n" << endl;

    for(auto element : v1){
        cout << element << ", ";
    }
    cout << endl;
    
    // 3.15 Repeat the program but with strings

    vector<string> v2;
    string s;
    while(cin >> s){
        v2.push_back(s);
    }
    cout << "Here is our vector! \n" << endl;

    for(auto element : v2){
        cout << element << ", ";
    }
    cout << endl;
    return 0;
}