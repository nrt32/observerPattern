#include <iostream>

#include "observer1.h"
#include "observer2.h"
#include "subject1.h"
#include "subject2.h"

int main() {
    auto sub1 = std::make_shared<subject1>();
    auto sub2 = std::make_shared<subject2>();

    auto obs1 = std::make_shared<observer1>();
    
    {
        auto obs2 = std::make_shared<observer2>();

        sub1->addObserver(obs1);
        sub1->addObserver(obs2);

        sub2->addObserver(obs1);

        std::cout << "Output when observer 2 object is in scope :" << std::endl;
        sub1->notify();
        sub2->notify(); 
        std::cout << std::endl << std::endl;
    }

    std::cout << "Output when observer 2 object is out of scope :" << std::endl;
    sub1->notify();
    sub2->notify();

	return 0;
}