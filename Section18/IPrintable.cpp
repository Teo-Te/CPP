#include "IPrintable.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const IPrintable &obj) {
    obj.print(os);
    return os;
}

