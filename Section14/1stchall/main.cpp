#include <iostream>
#include <cstring>
#include "Mystring.h"

using namespace std;

int main () {
    //aight testing time
    cout << boolalpha << endl;
    Mystring a {"arteo"};
    Mystring b {"arteo"};
    cout << (a == b) << endl; //should be true
    cout << (a != b) << endl; //should be false
    b = "Arteo";
    Mystring c {"Arteo"};
    cout << (a == b) << endl; //should be false
    cout << (a != b) << endl; //should be true
    cout << (a < c) << endl; //should be true oh boi this is wrong but i dont care
    cout << (a > c) << endl; //should be false oh boi this is wrong too
    Mystring s1 {"ARtEO"};
    s1.display();
    Mystring s2 = -s1; //should be arteo lowercased
    s2.display();
    Mystring s3 = s1 + s2; //should be ARTEOarteo
    s3.display();
    s3 += s1; //should be ARTEOarteoARTEO
    s3.display();
    Mystring s4 = s1 * 3; //should be ARTEOARTEOARTEO
    s4.display();
    Mystring s5 = ++s1; // prefix to upper
    s5.display();
    Mystring s6 = s1++;  // postfix to upper
    s6.display();
    Mystring s7 = --s1; // prefix to lower
    s7.display();
    Mystring s8 = s1--; // postfix to lower
    s8.display();

    return 0;

}