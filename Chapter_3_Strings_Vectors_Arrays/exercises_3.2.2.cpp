#include<iostream>
#include<string>

using namespace std;

int main(){
    
    // Declare s1 string variable
    string s1, s2;

    #if 0
    // Read standard input one line at a time
    while(getline(cin,s1)){
        if( !s1.empty()){
            cout << s1 << "\n" << endl;
        } else{
            cout << "string empty" << endl;
            break;
        }
    }

    // Now read a word at a time
    while(cin >> s1){
        // Type in control+D to stop cin input.
        cout << s1 << "\n" << endl; 
    }

    cout << "Done.";
    // Clear buffer
    cout << endl;
    
    // Take in two strings. Report which string is "Larger" and
    //  which string is "longer"
    getline(cin, s1); getline(cin, s2);

    if(s1 > s2){
        cout << "S1 is the larger string.\n";
        if(s1.size() > s2.size()){
            cout << "S1 is the longer string.\n";
        } else if(s1.size() < s2.size()){
            cout << "S2 is the longer string.\n";
        }else cout << "The strings have equal length.\n";
    } else if(s1 < s2 ){
        cout << "S2 is the larger string.\n";
        if(s1.size() > s2.size()){
            cout << "S1 is the longer string.\n";
        } else if(s1.size() < s2.size()){
            cout << "S2 is the longer string.\n";
        }else cout << "The strings have equal length.\n";
    } else cout << "I declare these strings equal.\n";

    // Clear buffer
    cout << endl;
    #endif

    // Concatenate strings entered (with a space in between)

    while(cin >> s2){
        if(s1.empty()){
            s1 = s2;
        }else s1 += " " + s2;
    }
    return 0;

}