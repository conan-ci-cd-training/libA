
#include "libA/libA.h"

#include <iostream>

void hello_libA(int indent, const std::string& msg) {
    std::cout << std::string(indent*2, ' ') << "libA: " << msg << std::endl;
}