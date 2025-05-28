#ifndef COMMUNICATION_H
#define COMMUNICATION_H
#include <string>

class Communication {
public:
    void greet(std::string name);
    void address(std::string& address);
    void closing(std::string title);
};
#endif 