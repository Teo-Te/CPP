#include "Savings.h"
#include <string>
#include <iostream>

// Constructors
Savings::Savings()
    : Account {}, int_rate {0.0} { //We can call the account constructor for the inherited variables
}

Savings::Savings(double balance, std::string name, double int_rate)
    : Account {balance, name}, int_rate {int_rate} {
}

// Methods
bool Savings::deposit(double amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount); // We can call the account deposit method, it is in the return statement because we want to return the value of the account deposit method
}

bool Savings::withdraw(double amount) {
    return Account::withdraw(amount);
}

void Savings::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Savings Account: " << name << ": " << balance << ", " << int_rate << "%]";
}

