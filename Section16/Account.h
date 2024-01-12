#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include "IPrintable.h"
#include <iostream>
#include <string>

class Account: public IPrintable {
    //friend std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    double balance;
    std::string name;
public:
    Account(double balance = 0.0, std::string name = "Unnamed Account");  
    virtual bool deposit(double amount) = 0; // pure virtual function
    virtual bool withdraw(double amount) = 0;
    virtual void print(std::ostream &os) const override;
    virtual ~Account() = default;
    
};

#endif