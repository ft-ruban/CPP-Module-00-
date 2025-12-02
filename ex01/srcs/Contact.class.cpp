#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( void ){
    std::cout << "contact called" << std::endl;
    return;
}

Contact::~Contact( void ){
    std::cout << "contact destr called" << std::endl;
    return;
}