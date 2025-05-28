// Name: Ryan Khieu
// Date: 5/20/25
// Program Name: Company Consistency Lab
// Extra: Choice between Video Game Pass and Individual Game

#include <iostream>
#include <string>
#include "communication.h"
#include "discounts.h"

std::string title;
int price;

int main() {
    // Class declarations
    Communication c;
    Discounts d;

    // Name input
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    c.greet(name);

    // Address input
    std::cout << "Please enter your address in the following format:" << std::endl;
    std::cout << "400 Street Name, City Name, CA 00000" << std::endl;
    std::string address;
    std::getline(std::cin, address);
    c.address(address);

    // Product selection
    std::cout << "Would you like to purchase Video Game Pass or an individual game?" << std::endl;
    std::cout << "1. Video Game Pass ($20)" << std::endl;
    std::cout << "2. Individual Game ($60)" << std::endl;
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        title = "Video Game Pass";
        price = 20;
    }
    else if (choice == 2) {
        std::cout << "Enter the title of the game you want to purchase: ";
        std::cin.ignore();
        std::getline(std::cin, title);
        price = 60;
    }
    else {
        std::cout << "Invalid choice. Please restart the program." << std::endl;
        return 1;
    }

    // Coupon code input
    std::cout << "Enter a coupon code or enter \"None\" if you do not have one: ";
    std::string coupon;
    std::cin >> coupon;

    for (int i = 0; i < coupon.size(); ++i) {
        coupon[i] = std::tolower(coupon[i]);
    }

    if (coupon == "student") {
        d.student(price);
    }
    else if (coupon == "veteran") {
        d.veteran(price);
    }
    else if (coupon == "senior") {
        d.senior(price);
    }

    std::cout << "Your price: $" << price << std::endl;
    c.closing(title);

    return 0;
}