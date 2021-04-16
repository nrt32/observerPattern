#ifndef OBSERVER_1_H
#define OBSERVER_1_H

#include "observerInterface.h"

class observer1 final : public observerInterface {

    static constexpr auto UNIQUE_ID = "observer1";

public:
    observer1() = default;
    void update(std::string data) override;
    const std::string getUniqueID() override;
};

#endif