#ifndef SUBJECT_1_H
#define SUBJECT_1_H

#include <string>

#include "subjectInterface.h"

class subject1 final : public subjectInterface {

    static constexpr auto UNIQUE_ID = "subject1";

private:
    const std::string getUniqueID() override{
        return UNIQUE_ID;
    }
};

#endif