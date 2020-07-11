#include <iostream>

using namespace std;

int main(){

    // Writing messages with escape sequences.
    cout << "Who goes with F\145rgus?\012" << endl;

    // Using escape sequences, write 2M, then write 2 and M on separate lines
    // then 2 tab M newline
    cout << "\62\115" << endl;
    cout << "\62\n\115" << endl;
    cout << "\62\t\115\n" << endl;
    return 0;
}