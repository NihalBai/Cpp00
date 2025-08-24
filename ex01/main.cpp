#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
    PhoneBook myPhoneBook;
    std::string choice;

    do {
        std::cout << "\nEnter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, choice);
        if (choice == "ADD") {
            myPhoneBook.Add();
        } else if (choice == "SEARCH") {
            myPhoneBook.Search();
        } else if (choice == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
        }
    } while (true);
    
    std::cout << "Exiting phonebook." << std::endl;
    return 0;
}