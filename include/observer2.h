#ifndef OBSERVER_2_H
#define OBSERVER_2_H

#include "observerInterface.h"

class observer2 final : public observerInterface {

    static constexpr auto UNIQUE_ID = "observer2";

public:
    observer2() = default;
    void update(std::string data) override;
    const std::string getUniqueID() override;
};

#endif