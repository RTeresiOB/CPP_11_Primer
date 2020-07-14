#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    // 3.24 Redo last exercise from 3.3.3 using iterators (exercise copied below)

    #if 0
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
    #endif
    return 0;
}