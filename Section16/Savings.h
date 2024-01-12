#ifndef _SAVINGS_H_
#define _SAVINGS_H_

#include <iostream>
#include <string>
#include "Account.h"

class Savings : public Account {
    //friend std::ostream &operator<<(std::ostream &os, const Savings &account);
protected:
    double int_rate;
public:
    Savings();
    Savings(double balance, std::string name, double int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override; // The others are inherited
    virtual void print(std::ostream &os) const override;
};


#endif