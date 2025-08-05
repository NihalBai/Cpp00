#include "PhoneBook.hpp"

PhoneBook :: PhoneBook()
{
    index = 0;
}
bool isValidPhoneNumber(const std::string& number) {
    if (number.empty())
        return false;

    size_t i = 0;
    if (number[0] == '+') i = 1;

    for (; i < number.length(); ++i) {
        if (!isdigit(number[i]))
            return false;
    }

    if (number.length() < 8 || number.length() > 16)
        return false;

    return true;
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
    std::cout << "Enter  phone number :";
    std::getline(std::cin,number);
    if (!isValidPhoneNumber(number))
    {
        std::cout << "Invalid number! Please try again.\n";
        std::cout << "Enter  phone number :";
        std::getline(std::cin,number);
    }
    std::cout << "Enter  darkest secret :";
    std::getline(std::cin,d_s);

    if (f_name.empty() || l_name.empty() || n_name.empty() ||
        number.empty() || d_s.empty()) {
        std::cout << "Error: All fields must be filled. Contact not added.\n";
        return;
    }

    contacts[index].setcontact(f_name,l_name,n_name,number,d_s);
    index = (index + 1)%8;
    std::cout << "Contact added at index " << index << "\n";
}

std::string formatField(const std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + "."; 
    return std::string(10 - str.length(), ' ') + str;  
}


void PhoneBook::PrintAll() {
    std::cout << "| Index | First Name | Last Name  | Nickname   |\n";
    std::cout << "-----------------------------------------------\n";

    for (int i = 0; i < 8; i++) {
        if (contacts[i].getFirstName().empty()) continue;
        std::cout << "| "
                  << std::setw(5) << i << " | "
                  << formatField(contacts[i].getFirstName()) << " | "
                  << formatField(contacts[i].getLastName()) << " | "
                  << formatField(contacts[i].getNickname()) << " |\n";
    }
}


void PhoneBook::Search()
{
   PrintAll();
   int i =-1;
   std::cout << "Enter index of contact you want :";
   std::cin >> i;
   std::cout << "| "
                  << std::setw(5) << i << " | "
                  << formatField(contacts[i].getFirstName()) << " | "
                  << formatField(contacts[i].getLastName()) << " | "
                  << formatField(contacts[i].getNickname()) << " |\n";
}