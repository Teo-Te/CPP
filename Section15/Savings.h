#ifndef _SAVINGS_H_
#define _SAVINGS_H_

#include <iostream>
#include <string>
#include "Account.h"

class Savings : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings &account);
protected:
    double int_rate;
public:
    Savings();
    Savings(double balance, std::string name, double int_rate);
    bool deposit(double amount); // This will be redefined because interest is added to the balance
    // The others are inherited
};


#endif