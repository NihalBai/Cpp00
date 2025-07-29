#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"
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