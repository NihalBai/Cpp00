#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
private:
   Contact contacts[8];
   int index;

public:
    PhoneBook();
    void PrintAll();
    void Add();
    void Search();
};


#endif