#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cctype>
#include <memory>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Trust.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;

int main () {
    try{
        unique_ptr<Account> p1 = make_unique<Checking>(1000.0, "Teo", 0.5);
        cout << *p1 << endl;
        p1->withdraw(2000.0);
    }
    catch (const IllegalBalanceException &ex) {
        cerr << ex.what() << endl;
    }
    catch (const InsufficientFundsException &ex) {
        cerr << ex.what() << endl;
    }

    return 0;
}