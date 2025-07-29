#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact
{
    public :
        Contact();
        void setcontact(std::string f_name,std::string l_name,std::string n_name,std::string number,std::string darkest_secret);
        std::string getcontact();
        std::string getFirstName() ;
        std::string getLastName() ;
        std::string getNickname() ;
        std::string getNumber() ;
        std::string getDarkestSecret();

       
    private :
        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string darkest_secret;
        std::string number;
};
#endif