#include <iostream>
#include <cstring>

int main() {
    int favorite_number;
    std::cout << "Enter your favorite numeber between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!! " << favorite_number << " is my favorite number!" << std::endl;

    std::cout << std::boolalpha << std::endl;
    std::cout << ("arteo" > "Arteo") << std::endl;

    return 0;
}