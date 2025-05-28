#include "discounts.h"
#include <iostream>
#include <string>

void Discounts::student(int& price) {
    price = price * 0.9;
}

void Discounts::veteran(int& price) {
    price = price * 0.8;
}

void Discounts::senior(int& price) {
    price = price * 0.85;
}