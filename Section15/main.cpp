#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Trust.h"

using namespace std;

int main () {
    Account a1 {1000.0, "John"};
    cout << a1 << endl;
    a1.deposit(500.0);
    cout << a1 << endl;
    a1.withdraw(1000.0);
    cout << a1 << endl;

    Savings s1 {1000.0, "Arteo", 5.0};
    cout << s1 << endl;
    s1.deposit(1000.0);
    cout << s1 << endl;
    s1.withdraw(2000.0);
    cout << s1 << endl;

    cout << boolalpha; 
    Checking c1 {1000.0, "Arteo", 1.5};
    cout << c1 << endl;
    c1.deposit(1000.0);
    cout << c1 << endl;
    c1.withdraw(2000.0);
    cout << c1 << endl;
    c1.withdraw(1.0);
    c1.withdraw(1.0);
    c1.withdraw(1.0);
    cout << c1 << endl;
    c1.withdraw(1.0);

    Trust t1 {1000.0, "Arteo", 5.0};
    cout << t1 << endl;
    t1.deposit(1000.0);
    cout << t1 << endl;
    t1.withdraw(2000.0);
    cout << t1 << endl;
    t1.withdraw(1.0);
    t1.withdraw(1.0);
    t1.withdraw(1.0);
    cout << t1 << endl;
    t1.withdraw(1.0);
    cout << t1 << endl;
    // Every test case is working as expected

    return 0;
}