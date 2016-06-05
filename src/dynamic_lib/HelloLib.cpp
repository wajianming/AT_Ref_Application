#include "HelloLib.h"
#include <iostream>

HelloLib::HelloLib(){
    std::cout << "Hello Lib Constructed." << std::endl;
}

HelloLib::~HelloLib(){
    std::cout << "Hello Lib Destructed." << std::endl;
}
