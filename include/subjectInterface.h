#ifndef SUBJECT_INTERFACE_H
#define SUBJECT_INTERFACE_H

#include <memory>
#include <vector>
#include <algorithm>
#include <string>

#include "observerInterface.h"

class subjectInterface {
public:

    void addObserver(const std::shared_ptr<observerInterface> & observer) {
        m_vObservers.emplace_back(observer);
    }

    void removeObserver(std::shared_ptr<observerInterface> observer) {
        m_vObservers.erase(std::remove_if(m_vObservers.begin(), m_vObservers.end(),
            [&] (const auto & ob) {
                auto ptr = ob.lock();
                return ptr->getUniqueID() == observer->getUniqueID();
            }), m_vObservers.end());
    }

    void notify() {
        for (const auto & observer : m_vObservers) {
            auto ptr = observer.lock();
            if(ptr)
                ptr->update(getUniqueID());
        }
    };

protected:
    virtual const std::string getUniqueID() = 0;
    std::vector<std::weak_ptr<observerInterface>> m_vObservers;
};

#endif