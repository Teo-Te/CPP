#include "Trust.h"
#include <iostream>
#include <string>

// Constructors
Trust::Trust()
    : Savings {}, num_withdrawals {0} {
}

Trust::Trust(double balance, std::string name, double int_rate)
    : Savings {balance, name, int_rate}, num_withdrawals {0} {
}

// Methods
bool Trust::deposit(double amount) {
    if (amount >= bonus_limit)
        amount += bonus_amount;
    return Savings::deposit(amount);
}

bool Trust::withdraw(double amount) {
    if (num_withdrawals >= max_withdrawals || amount > balance * max_withdraw_percent)
        return false;
    else {
        ++num_withdrawals;
        return Savings::withdraw(amount);
    }
}

void Trust::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Trust Account: " << name << ": " << balance << ", " << int_rate << "%, withdrawals: " << num_withdrawals << "]";
}

