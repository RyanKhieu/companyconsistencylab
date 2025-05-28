#include <iostream>
#include <string>
#include "communication.h"

// Greet user
void Communication::greet(std::string name) {
    std::cout << "Welcome, " << name << ", to Zbox, a Macrosoft Company." << std::endl;
}

// Adress format
void Communication::address(std::string& address) {
    for (int i = 0; i < address.size(); ++i) {
        address[i] = std::toupper(address[i]);
    }
    std::cout << "Formatted Address: " << address << std::endl;
}

// Closing message
void Communication::closing(std::string title) {
    std::cout << "Thank you for purchasing " << title << " from Zbox." << std::endl;
}