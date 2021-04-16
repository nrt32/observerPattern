#ifndef OBSERVER_INTERFACE_H
#define OBSERVER_INTERFACE_H

#include <string>
#include <memory>

class observerInterface : public std::enable_shared_from_this<observerInterface> {
public:
    virtual void update(std::string data) = 0;
    virtual const std::string getUniqueID() = 0;
    observerInterface() = default;

private:
    //deleting copy constructor and copy operator.
    observerInterface(const observerInterface &) = delete;
    observerInterface & operator=(const observerInterface &) = delete;
};

using createFunc = std::shared_ptr<observerInterface> (*) ();

#endif