
#include "libA/libA.h"

#include <iostream>

void hello_libA(int indent, const std::string& msg) {
    // This is going to add a double indent
    std::cout << std::string(2*indent, ' ') << "libA: " << msg << std::endl;
}