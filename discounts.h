#ifndef DISCOUNTS_H
#define DISCOUNTS_H
#include <string>

class Discounts {
public:
    void student(int& price);
    void veteran(int& price);
    void senior(int& price);
};
#endif 