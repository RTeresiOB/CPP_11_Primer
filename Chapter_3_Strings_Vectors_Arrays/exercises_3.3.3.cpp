#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    // 3.17 Read a sequence of words from cin and store the values in a vector.
    //      After you've read all of the words, process the vector and change each 
    //      word to uppercase. Print the transformed elements, eight words to a line.

    #if 0
    // Declare variables
    vector<string>  svec;
    string s1;

    // Add words to vector
    cout << "Type in your favorite words:\n" << endl;
    // Cin splits strings on space
    while(cin >> s1){
        for(auto &c : s1){
            if(isalpha(c)){ c = toupper(c); }
        }
        svec.push_back(s1);
    }

    // Print words, eight to a line.

    cout << "Here are our words!\n";
    // Make a count variable for words on a line
    int n = 0;
    for(auto i : svec){
        if(n == 8){
            cout << "\n";
            n = 0;
        }
        cout << i << " ";
        ++n;
    }
    cout << endl;
    #endif

    // 3.20 Read a set of iintegers into a vector. Print the sum of each
    //      pair of adjacent elements. Then print the sum of the
    //      first/last elements, followed by second/second-to-last, so on...

    vector<int> vint;
    int k;

    cout << "Type in some ints  please:" << endl;
    while(cin >> k){
        vint.push_back(k);
    }

    if(vint.empty()){
        cout << "No integers entered." <<  endl;
        return 1;
    }

    // Print sum of adjacent elements
    cout << "Printing sums of adjacent elements:" << endl;
    for(decltype(vint.size()) i = 0; i != vint.size(); ++i ){
        if(i % 2 == 0){
            continue;
        } else{
            cout << vint[(i-1)] + vint[i] << endl;
        }
    }

    // Print sums of first last, etc.
    cout << "Printing outside sums:" << endl;
    int middle = vint.size() / 2; // If size is 7, middle is 3, 8 is 4

    for(decltype(vint.size()) i = 0; i != middle; ++i ){
        cout << vint[i] + vint[vint.size() - (1 + i)] << endl;
    }
    return 0;
}