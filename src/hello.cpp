#include "hello.hpp"

#include <iostream>

void SayHello(const boost::system::error_code&) {
    std::cout << "Hello world" << std::endl;
}
