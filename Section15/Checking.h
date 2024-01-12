#ifndef _CHECKING_H_
#define _CHECKING_H_

#include <iostream>
#include <string>
#include "Account.h"

class Checking : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking &account);
protected:
    double fee;
public:
    Checking();
    Checking(double balance, std::string name, double fee);
    bool withdraw(double amount);
    // The others are inherited
};


#endif