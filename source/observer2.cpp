#include <iostream>

#include "observer2.h"

void observer2::update(std::string data) {
    std::cout << getUniqueID() << " update called from : " << data << std::endl;
}

const std::string observer2::getUniqueID() {
    return UNIQUE_ID;
}