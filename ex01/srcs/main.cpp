#include <iostream>
#include "PhoneBook.class.hpp"

int main(void)
{
    std::string prompt;
    bool exit = false;
    std::size_t index_contact = 1;

    //PhoneBook instance;
    std::cout<<"Welcome to Bananaphone"<<std::endl;
    
    //ADD / SEARCH // EXIT    
    while(!exit){
        std::cout<<"enter one of the following three commands(ADD, SEARCH, EXIT): "<<std::endl;
        std::cin >> prompt;
        if (prompt.compare("ADD") == 0){
            std::cout<<"ADD detected" << std::endl;//TORM
            //save new contact prompt user to input the information of a new contact
            //-first name
            //-last name
            //-phone number
            //-darkest secret
        }
        else if (prompt.compare("SEARCH") == 0){
            std::cout<<"SEARCH detected" << std::endl;//TORM
        }
        else if (prompt.compare("EXIT") == 0){
            std::cout<<"EXIT detected" << std::endl;//TORM
            exit = true;
            return(0);
        }
    }
    return(0);
}