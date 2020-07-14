#include<iostream>
#include<vector>
#include<string>

using namespace std;
using std::cout;

int main(){
    #if 0
    // 3.2.1 Redo first  exercises from 3.3.3 with iterators
    //          (Exercise copied at end of script)

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

    // cbegin makes i a read-only iterator
    for(auto i = svec.cbegin();
        i != svec.cend();
        ++i){
        if(n == 8){
            cout << "\n";
            n = 0;
        }
        cout << *i << " ";
        ++n;
    }
    cout << endl;
    # endif
    // Revise loop (code in book) that printed the first paragraph in text 
    // to instead change the elements in text that correspond to the first
    // to al uppercase. After you've updated text, print its contents.k

    // Note: I see no text so I will make one. It is a vector from a text file

    vector<string> svec2 {"how", "about", "this", "\n", "now"};
    string s2;

    // Make variable that will switch capitalization on new line/paragraph.
    bool newp = false;
    for(auto i = svec2.begin(); i != svec2.end(); ++i){
        if(*i == "\n"){
            newp = true;
            cout << endl;
            continue;
        }
        cout << " ";
        if(newp){
            cout << *i;
            } else{
                for( auto &c : *i){
                    if(isalpha(c)){
                        c = toupper(c);
                    }
                }
                cout << *i;
            }
    }
    cout << endl;

    // 3.23 Make a vector with ten int elements and then double them using iterators

    vector<int> intvec(10,22);
    cout << "Original vector ten 22's" << endl;
    for(auto i = intvec.begin(); i != intvec.end(); ++i){
        *i *= 2;
    }

    cout << "New vector:" << endl;
    for(decltype(intvec.size()) i = 0; i != intvec.size(); ++i){
        cout << intvec[i] << " ";
    }
    cout << endl;
    #if 0
    // 3.17 Read a sequence of words from cin and store the values in a vector.
    //      After you've read all of the words, process the vector and change each 
    //      word to uppercase. Print the transformed elements, eight words to a line.

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
    return 0;
}