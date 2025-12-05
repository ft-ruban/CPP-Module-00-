#include <iostream>
#include "PhoneBook.class.hpp"

void add_in_contact(std::string prompt, std::size_t *index_contact, std::size_t *nbr_contact, PhoneBook &PhoneBook)
{
    prompt.clear();
    while(prompt.empty()){
        std::cout<<"First name: "<<std::endl;
        std::getline(std::cin, prompt);
    }
    PhoneBook.SetFirstName(prompt, *index_contact);
    prompt.clear();
    while(prompt.empty()){
    std::cout<<"Nickname: "<<std::endl;
    std::getline(std::cin, prompt);
    }
    PhoneBook.SetNickname(prompt, *index_contact);
    prompt.clear();
    while(prompt.empty()){
        std::cout<<"Last name: "<<std::endl;
        std::getline(std::cin, prompt);
    }
    PhoneBook.SetLastName(prompt, *index_contact);
    prompt.clear();
    while(prompt.empty()){
    std::cout<<"phone number: "<<std::endl;
    std::getline(std::cin, prompt);
    }
    PhoneBook.SetPhoneNumber(prompt, *index_contact);
    prompt.clear();
    while(prompt.empty()){
        std::cout<<"Darkest secret(o~o): "<<std::endl;
        std::getline(std::cin, prompt);
    }
    PhoneBook.SetDarkestSecret(prompt, *index_contact);
    *index_contact = *index_contact + 1;
    if(*index_contact == 8)
        *index_contact = 0;
    if (*index_contact > *nbr_contact)
        *nbr_contact = *index_contact;
}
// ◦ Display the saved contacts as a list of 4 columns: index, first name, last
// name and nickname.
// ◦ Each column must be 10 characters wide. A pipe character (’|’) separates
// them. The text must be right-aligned. If the text is longer than the column,
// it must be truncated and the last displayable character must be replaced by a
// dot (’.’).
// ◦ Then, prompt the user again for the index of the entry to display. If the index
// is out of range or wrong, define a relevant behavior. Otherwise, display the
// contact information, one field per line.
void search_contact(std::string prompt, std::size_t *index_contact, PhoneBook &PhoneBook, std::size_t nbr_contact)
{
    (void)prompt;
    (void)*index_contact;
    (void)PhoneBook;
    std::size_t i = 0;
    //if no contact print smth specific like NOCONTACTSFOUND
    std::cout<<"     index|first name|  last name|  nickname"<<std::endl;
    while(nbr_contact > i) //au dessus ET egal?
    {
    std::cout<<"         " << i+1 << "|";
    //chercher taille texte

    std::cout<<std::endl;
        i++;
    }
}
int main(void)
{
    std::string prompt;
    bool exit = false;
    std::size_t index_contact = 0;
    std::size_t nbr_contact = 0;

    std::cout<<"Welcome to Bananaphone"<<std::endl;
    PhoneBook PhoneBook;   
    while(!exit){
        //std::cout<<"enter one of the following three commands(ADD, SEARCH, EXIT): "<<std::endl;
        //std::cin >> prompt;
        std::getline(std::cin, prompt);
        //std::cout<<prompt<<std::endl;
        if (prompt.compare("ADD") == 0){
            add_in_contact(prompt, &index_contact, &nbr_contact, PhoneBook);
            std::cout<<index_contact<<std::endl; //TORM
        }
        else if (prompt.compare("SEARCH") == 0){
            search_contact(prompt, &index_contact, PhoneBook, nbr_contact);
        }
        else if (prompt.compare("EXIT") == 0){
            exit = true;
        }
    }
    return(0);
}