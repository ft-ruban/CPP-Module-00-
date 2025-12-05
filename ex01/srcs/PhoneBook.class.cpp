#include <iostream>
#include "PhoneBook.class.hpp" //voir pk dans la video il met hpp et pas .h
#include "Contact.class.hpp"

PhoneBook::PhoneBook( void ){
    std::cout << "phonebook called" << std::endl;
    return;
}

PhoneBook::~PhoneBook( void ){
    std::cout << "Phonebook destr called" << std::endl;
    return;
}


