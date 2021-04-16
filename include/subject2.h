#ifndef SUBJECT_2_H
#define SUBJECT_2_H

#include <string>

#include "subjectInterface.h"

class subject2 final : public subjectInterface {

    static constexpr auto UNIQUE_ID = "subject2";

private:
    const std::string getUniqueID() override{
        return UNIQUE_ID;
    }
};

#endif