#include <iostream>
#include "PhoneBook.class.hpp"

void add_in_contact(std::string prompt, std::size_t index_contact, PhoneBook PhoneBook)
{
    std::cout<<"First name: "<<std::endl;
    std::cin >> prompt;
    PhoneBook.SetFirstName(prompt, index_contact);
    std::cout<<"Nickname: "<<std::endl;
    std::cin >> prompt;
    PhoneBook.SetNickname(prompt, index_contact);
    std::cout<<"Last name: "<<std::endl;
    std::cin >> prompt;
    PhoneBook.SetLastName(prompt, index_contact);
    std::cout<<"phone number: "<<std::endl;
    std::cin >> prompt;
    PhoneBook.SetPhoneNumber(prompt, index_contact);
    std::cout<<"Darkest secret(o~o): "<<std::endl;
    std::cin >> prompt;
    PhoneBook.SetDarkestSecret(prompt, index_contact);
}

int main(void)
{
    std::string prompt;
    bool exit = false;
    std::size_t index_contact = 0;

    //PhoneBook instance;
    std::cout<<"Welcome to Bananaphone"<<std::endl;
    PhoneBook PhoneBook;
    //ADD / SEARCH // EXIT    
    while(!exit){
        std::cout<<"enter one of the following three commands(ADD, SEARCH, EXIT): "<<std::endl;
        std::cin >> prompt;
        if (prompt.compare("ADD") == 0){
            add_in_contact(prompt, index_contact, PhoneBook);
            index_contact++;
            if(index_contact == 8)
                index_contact = 0;
        }
        else if (prompt.compare("SEARCH") == 0){
            std::cout<<"SEARCH detected" << std::endl;//TORM
        }
        else if (prompt.compare("EXIT") == 0){
            exit = true;
            //return(0);
        }
    }
    return(0);
}