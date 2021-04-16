#include <iostream>

#include "observer1.h"
#include "subject1.h"

void observer1::update(std::string data) {
    std::cout << getUniqueID() << " update called from : " << data << std::endl;
}

const std::string observer1::getUniqueID() {
    return UNIQUE_ID;
}