#include <iostream>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

int main () {
    int num {};
    string input {};
    bool done {false};

    do {
        cout << "Enter an integer: ";
        cin >> input;
        istringstream ss {input};  //istringstream ss {input}; for reading, ostringstream ss {input}; for writing
        if (ss >> num) {
            cout << "You entered the integer: " << num << endl;
            done = true;
        } else {
            cout << "Sorry, that's not an integer" << endl;
        }

        // Clear the buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // so as to ignore the rest of the input so when the loop runs again, it doesn't read the leftover input 


    } while (!done);
}