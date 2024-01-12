#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    double balance;
    std::string name;
public:
    Account(double balance = 0.0, std::string name = "Unnamed Account");  
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
};

#endif