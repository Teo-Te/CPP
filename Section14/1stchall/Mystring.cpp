#include "Mystring.h"
#include <cstring>
#include <iostream>

Mystring::Mystring()
    :str{nullptr} {
        str = new char[1];
        *str = '\0';
}

Mystring::Mystring(const char *s)
    :str{nullptr} {
        if (s == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
}

Mystring::Mystring(const Mystring &source)
    :str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
}

Mystring::~Mystring() {
    delete [] str;
}

Mystring &Mystring::operator=(const Mystring &rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

void Mystring::display() const {
    std::cout << str << " - " << get_length() << std::endl;
}

int Mystring::get_length() const {
    return std::strlen(str);
}

const char *Mystring::get_str() const {
    return str;
}


Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

bool Mystring::operator==(const Mystring &rhs) {
    return (std::strcmp(str, rhs.str) == 0);
}

bool Mystring::operator!=(const Mystring &rhs) {
    return (std::strcmp(str, rhs.str) != 0);
}

bool Mystring::operator<(const Mystring &rhs) {
    return (std::strcmp(str, rhs.str) < 0);
}

bool Mystring::operator>(const Mystring &rhs) {
    return (std::strcmp(str, rhs.str) > 0);
}

Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring Mystring::operator+=(const Mystring &rhs) {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    delete [] str;
    str = buff;
    return *this;
}

Mystring Mystring::operator*(int n) {
    char *buff = new char[std::strlen(str) * n + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < n - 1; i++) { //n - 1 because we already have 1 copy
        std::strcat(buff, str);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring Mystring::operator*=(int n) {
    char *buff = new char[std::strlen(str) * n + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < n - 1; i++) { //n - 1 because we already have 1 copy
        std::strcat(buff, str);
    }
    delete [] str;
    str = buff;
    return *this;
}

Mystring Mystring::operator++() { //prefix increment
    for (size_t i = 0; i < std::strlen(str); i++) {
        str[i] = std::toupper(str[i]);
    }
    return *this;
}

Mystring Mystring::operator++(int) { //postfix increment
    Mystring temp {*this};
    operator++();
    return temp;
}

Mystring Mystring::operator--() { //prefix decrement
    for (size_t i = 0; i < std::strlen(str); i++) {
        str[i] = std::tolower(str[i]);
    }
    return *this;
}

Mystring Mystring::operator--(int) { //postfix decrement
    Mystring temp {*this};
    operator--();
    return temp;
}

std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.get_str();
    return os;
}

std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring {buff};
    delete [] buff;
    return in;
}