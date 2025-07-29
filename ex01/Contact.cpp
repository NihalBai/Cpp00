#include "Contact.h"

Contact::Contact() : f_name(""),l_name(""),n_name(""), number("") {}

void Contact::setcontact(std::string f_name,std::string l_name,std::string n_name,std::string number,std::string darkest_secret)
{
    this->f_name = f_name;
    this->f_name = l_name;
    this->f_name = n_name;
    this->number = number;
    this->darkest_secret = darkest_secret;
}

std::string Contact:: getcontact()
{
    return "name: " +f_name+ " "+l_name+" "+n_name+ " phone number :" +number+ " darkest secret : "+darkest_secret;
}

std::string Contact:: getFirstName() { return f_name; }
std::string Contact:: getLastName() { return l_name; }
std::string Contact:: getNickname() { return n_name; }
std::string Contact:: getNumber() { return number; }
std::string Contact:: getDarkestSecret() { return darkest_secret; }

