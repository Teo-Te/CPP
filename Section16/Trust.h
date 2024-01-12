#ifndef _TRUST_H_
#define _TRUST_H_

#include "Savings.h"
#include <string>
#include <iostream>

class Trust : public Savings {
    friend std::ostream &operator<<(std::ostream &os, const Trust &account);
protected:
    int num_withdrawals;
    const int max_withdrawals = 3;
    const double max_withdraw_percent = 0.2;
    const int bonus_amount = 50;
    const int bonus_limit = 5000;
public:
    Trust();
    Trust(double balance, std::string name, double int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    // The others are inherited
};



#endif