#include "PhoneBook.h"

PhoneBook :: PhoneBook()
{
    index = 0;
}

void PhoneBook::Add()
{
    std::string f_name,l_name,n_name, number,d_s;

    std::cout << "Enter first name :";
    std::getline(std::cin,f_name);
    std::cout << "Enter last name :";
    std::getline(std::cin,l_name);
    std::cout << "Enter  nickname :";
    std::getline(std::cin,n_name);
    std::cout << "Enter first  phone number :";
    std::getline(std::cin,number);
    std::cout << "Enter  darkest secret :";
    std::getline(std::cin,d_s);

    contacts[index].setcontact(f_name,l_name,n_name,number,d_s);
    index = (index + 1)%8;
    std::cout << "Contact added at index " << index << "\n";
}

void PhoneBook::PrintAll() {
    std::cout << "| Index | First Name | Last Name  | Nickname   | Phone Number | Darkest Secret |\n";
    std::cout << "-------------------------------------------------------------------------------\n";

    for (int i = 0; i < 8; i++) {
        std::cout << "| " << std::setw(5) << i << " | "
                  << std::setw(10) << contacts[i].getFirstName() << " | "
                  << std::setw(10) << contacts[i].getLastName() << " | "
                  << std::setw(10) << contacts[i].getNickname() << " | "
                  << std::setw(12) << contacts[i].getNumber() << " | "
                  << std::setw(14) << contacts[i].getDarkestSecret() << " |\n";
    }
}

void PhoneBook::Search()
{
   PrintAll();
   int i =-1;
   std::cout << "Enter index of contact you want :";
   std::cin >> i;
   std::cout << "| " << std::setw(5) << i << " | "
   << std::setw(10) << contacts[i].getFirstName() << " | "
   << std::setw(10) << contacts[i].getLastName() << " | "
   << std::setw(10) << contacts[i].getNickname() << " | "
   << std::setw(12) << contacts[i].getNumber() << " | "
   << std::setw(14) << contacts[i].getDarkestSecret() << " |\n";
}