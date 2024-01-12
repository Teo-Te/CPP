#include <iostream>

using namespace std;

int main () {
    cout << "Teo's Carpet Cleaning Service" << endl;
    const double price_small_room {25};
    const double price_large_room {35};
    const double tax_rate {0.06};
    const int estimate_expiry {30};
    int number_small_rooms {0};
    int number_large_rooms {0};
    cout << "Please enter the number of small rooms and large rooms seperated by a space" << endl;
    cin >> number_small_rooms >> number_large_rooms;
    cout << "Number of small rooms: " << number_small_rooms << endl;
    cout << "Number of large rooms: " << number_large_rooms << endl;
    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;
    double cost {(number_small_rooms * price_small_room) + (number_large_rooms * price_large_room)};
    cout << "Cost: $" << cost << endl;
    double tax {cost * tax_rate};
    cout << "Tax: $" << tax << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    return 0;
}