#include <iostream>

using namespace std;

int main () {
    
    int num_cents {0};
    cout << "Enter an amount in cents: ";
    cin >> num_cents;

    int dollars_per_cent {100};
    int quarters_per_cent {25};
    int dimes_per_cent {10};
    int nickels_per_cent {5};
    int pennies_per_cent {1};

    int num_dollars {0};
    int num_quarters {0};
    int num_dimes {0};
    int num_nickels {0};
    int num_pennies {0};

    num_dollars = num_cents / dollars_per_cent;
    num_cents %= dollars_per_cent;

    num_quarters = num_cents / quarters_per_cent;
    num_cents %= quarters_per_cent;

    num_dimes = num_cents / dimes_per_cent;
    num_cents %= dimes_per_cent;

    num_nickels = num_cents / nickels_per_cent;
    num_cents %= nickels_per_cent;

    num_pennies = num_cents / pennies_per_cent;
    num_cents %= pennies_per_cent;

    cout << "The change should be: " << endl;
    cout << "dollars: " << num_dollars << endl;
    cout << "quarters: " << num_quarters << endl;
    cout << "dimes: " << num_dimes << endl;
    cout << "nickels: " << num_nickels << endl;
    cout << "pennies: " << num_pennies << endl;

    return 0;

}