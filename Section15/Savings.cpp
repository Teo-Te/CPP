#include "Savings.h"
#include <string>

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

std::ostream &operator<<(std::ostream &os, const Savings &account) { // Ive never really understood this but it works 
    os << "[Savings Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}

