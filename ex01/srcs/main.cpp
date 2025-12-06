#include <iostream>
#include "PhoneBook.class.hpp"
#include <string>
#include <sstream>
//#include <stream>

void add_prompt_user(std::string &prompt, std::string message)
{
    prompt.clear();
    while(prompt.empty()){
        std::cout<<message<<std::endl;
        std::getline(std::cin, prompt);
    }
    // std::cout<<prompt<<std::endl;
}

void add_in_contact(std::string prompt, std::size_t *index_contact, std::size_t *nbr_contact, PhoneBook &PhoneBook)
{
    add_prompt_user(prompt, "First name: ");
    PhoneBook.SetFirstName(prompt, *index_contact);
    // std::cout<<PhoneBook.GetFirstName(0)<<std::endl;

    add_prompt_user(prompt, "Last name: ");
    PhoneBook.SetLastName(prompt, *index_contact);

    add_prompt_user(prompt, "Nickname: ");
    PhoneBook.SetNickname(prompt, *index_contact);
    // std::cout<<PhoneBook.GetNickname(0)<<std::endl;

    add_prompt_user(prompt, "Phone number: ");
    PhoneBook.SetPhoneNumber(prompt, *index_contact);

    add_prompt_user(prompt, "Darkest secret(o~o): ");
    PhoneBook.SetDarkestSecret(prompt, *index_contact);

    // std::cout<<PhoneBook.GetFirstName(0)<<std::endl;
    // std::cout<<PhoneBook.GetNickname(0)<<std::endl;
    // std::cout<<PhoneBook.GetLastName(0)<<std::endl;
    // std::cout<<PhoneBook.GetPhoneNumber(0)<<std::endl;
    // std::cout<<PhoneBook.GetDarkestSecret(0)<<std::endl;
    
    *index_contact = *index_contact + 1;
    if (*index_contact > *nbr_contact)
        *nbr_contact = *index_contact;
    if(*index_contact == 8)
        *index_contact = 0;
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

void print_info(std::string buffer, std::size_t sizeofprompt){
    
    if(sizeofprompt <= 10)
    {
        while(sizeofprompt != 10){
        std::cout<<" ";
        sizeofprompt++;
        }
        std::cout<<buffer;
    }
    else{
        std::string buffer_cut;
        buffer_cut.append(buffer,0,9);
        std::cout<<buffer_cut<<".";
    }
    std::cout<<"|";
}
void search_contact(std::string prompt, std::size_t *index_contact, PhoneBook &PhoneBook, std::size_t nbr_contact)
{
    (void)prompt;
    (void)*index_contact;
    (void)PhoneBook;
    std::string buffer;
    std::size_t sizeofprompt;

    std::size_t i = 0;
    //TODOif no contact print smth specific like NOCONTACTSFOUND
    std::cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<std::endl;
    std::cout<<"|    index|first name| last name|  nickname|"<<std::endl;

    while(nbr_contact > i) //au dessus ET egal?
    {
    std::cout<<"|        " << i+1 << "|"; //INDEX + |
    buffer = PhoneBook.GetFirstName(i);
    sizeofprompt = buffer.length();
    print_info(buffer, sizeofprompt); //FAIRE FIRST NAME
    buffer = PhoneBook.GetLastName(i); //TODO clean buffer?
    sizeofprompt = buffer.length();
    print_info(buffer, sizeofprompt);
    buffer = PhoneBook.GetNickname(i); //TODO clean buffer?
    sizeofprompt = buffer.length();
    print_info(buffer, sizeofprompt);
    std::cout<<std::endl;
        i++;
    }
    std::cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<std::endl;
}

void print_informations(std::size_t selected_index, PhoneBook PhoneBook)
{
    //std::string info = NULL;

    //info = PhoneBook::GetFirstName(selected_index);

    std::cout<<"First name: "<<PhoneBook.GetFirstName(selected_index)<<std::endl;
    std::cout<<"Last name: "<<PhoneBook.GetLastName(selected_index)<<std::endl;
    std::cout<<"Nickname: "<<PhoneBook.GetNickname(selected_index)<<std::endl;
    std::cout<<"Phone number: "<<PhoneBook.GetPhoneNumber(selected_index) <<std::endl;
    std::cout<<"Darkest secret(o~o): "<<PhoneBook.GetDarkestSecret(selected_index)<<std::endl;
}

void ask_user_index(std::string prompt, std::size_t nbr_contact, PhoneBook PhoneBook){

    std::size_t converted_prompt = 42;
    bool prompt_is_invalid = true;

    std::cout<<"Which index of the entry to display? :"<<std::endl;
    while(converted_prompt > nbr_contact || converted_prompt == 0 || prompt_is_invalid){

        prompt_is_invalid = false;
        std::getline(std::cin, prompt);
        std::stringstream(prompt) >> converted_prompt;
        for (std::size_t i=0; i < prompt.length();i++){
            if(isdigit(prompt[i]) == false){
                prompt_is_invalid = true;
                break;
            }
        }
        if(converted_prompt > nbr_contact || converted_prompt == 0 || prompt_is_invalid){
            std::cout<<"Invalid index you have at the moment a total number of "<<nbr_contact << " phone contact, try again: "<<std::endl;
        }
    }
    print_informations(converted_prompt-1, PhoneBook);
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
        std::cout<<"enter one of the following three commands(ADD, SEARCH, EXIT): "<<std::endl;
        std::getline(std::cin, prompt);
        //std::cout<<prompt<<std::endl;
        if (prompt.compare("ADD") == 0){
            add_in_contact(prompt, &index_contact, &nbr_contact, PhoneBook);
            //std::cout<<index_contact<<std::endl; //TORM
        }
        else if (prompt.compare("SEARCH") == 0){
            search_contact(prompt, &index_contact, PhoneBook, nbr_contact);
            //TODO if no contact leave that place
            //prompt user sur l'index qu'il veut et afficher le contact en question 
            ask_user_index(prompt, nbr_contact, PhoneBook);
        }
        else if (prompt.compare("EXIT") == 0)
            exit = true;
        prompt.clear();
    }
    return(0);
}