#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cctype>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Trust.h"

using namespace std;

int main () {
    Account *p1 = new Savings {2000.0, "teo", 5.0};
    cout << *p1 << endl;
    Account *p2 = new Checking {5000.0, "Arteo", 1.5};
    Account *p3 = new Trust {3000.0, "eo", 5.0};
    vector<Account *> accounts {p1, p2, p3};
    for (const auto &acc: accounts) {
        cout << *acc << endl;
    }
    delete p1;
    delete p2;
    delete p3;
    //Everything works just fine

    // Account a1 {1000.0, "John"};
    // cout << a1 << endl;
    // a1.deposit(500.0);
    // cout << a1 << endl;
    // a1.withdraw(1000.0);
    // cout << a1 << endl;

    // Savings s1 {1000.0, "Arteo", 5.0};
    // cout << s1 << endl;
    // s1.deposit(1000.0);
    // cout << s1 << endl;
    // s1.withdraw(2000.0);
    // cout << s1 << endl;

    // cout << boolalpha; 
    // Checking c1 {1000.0, "Arteo", 1.5};
    // cout << c1 << endl;
    // c1.deposit(1000.0);
    // cout << c1 << endl;
    // c1.withdraw(2000.0);
    // cout << c1 << endl;
    // c1.withdraw(1.0);
    // c1.withdraw(1.0);
    // c1.withdraw(1.0);
    // cout << c1 << endl;
    // c1.withdraw(1.0);

    // Trust t1 {1000.0, "Arteo", 5.0};
    // cout << t1 << endl;
    // t1.deposit(1000.0);
    // cout << t1 << endl;
    // t1.withdraw(2000.0);
    // cout << t1 << endl;
    // t1.withdraw(1.0);
    // t1.withdraw(1.0);
    // t1.withdraw(1.0);
    // cout << t1 << endl;
    // t1.withdraw(1.0);
    // cout << t1 << endl;
    // Every test case is working as expected

    return 0;
}