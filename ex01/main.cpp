#include "PhoneBook.h"
#include <iostream>

int main() {
    PhoneBook myPhoneBook;

    char choice;

    // myPhoneBook.PrintAll();

    do {
        std::cout << "\nPHONEBOOK MENU\n";
        std::cout << "A: Add Contact\n";
        std::cout << "S: Search Contact\n";
        std::cout << "E: Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 'A' || choice == 'a') {
            myPhoneBook.Add();
        }
        else{
            if (choice == 'S' || choice == 's') {
                myPhoneBook.Search();
            }
        }

        // myPhoneBook.PrintAll();
    } while (choice != 'E' && choice != 'e');
    
    std::cout << "Exiting phonebook.\n";
    return 0;
}
