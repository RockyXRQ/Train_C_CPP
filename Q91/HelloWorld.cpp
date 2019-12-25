#include "HelloWorld.h"
#include <iostream>

HelloWorld::HelloWorld(const std::string& name) {
    myName = name;
}

HelloWorld::~HelloWorld() {
    std::cout << myName << " Bye World" << std::endl;
}

void HelloWorld::HelloWolrdEng() const {
    std::cout << myName << " Hello World" << std::endl;
}

std::string HelloWorld::operator+(const std::string name) const {
    return myName + name;
}
