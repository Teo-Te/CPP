#include "Account.h"
#include <iostream>
#include <string>

// Constructors (I m not declearing any deconstructors since I m not using any dynamic memory allocation)

Account::Account(double balance, std::string name)
    : balance {balance}, name {name} {
    if (balance < 0)
        throw IllegalBalanceException();
}

// Methods
bool Account::deposit(double amount) {
    if (amount < 0)
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else  // sometimes we dont need parathesis when we have only one statement in the if or else block
        throw InsufficientFundsException();
}

void Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}

