#include "../../includes/exec.hpp"

static void display_asked_contact_info(std::size_t selected_index, PhoneBook PhoneBook)
{
    //std::string info = NULL;

    //info = PhoneBook::GetFirstName(selected_index);

    std::cout<<"First name: "<<PhoneBook.GetFirstName(selected_index)<<std::endl;
    std::cout<<"Last name: "<<PhoneBook.GetLastName(selected_index)<<std::endl;
    std::cout<<"Nickname: "<<PhoneBook.GetNickname(selected_index)<<std::endl;
    std::cout<<"Phone number: "<<PhoneBook.GetPhoneNumber(selected_index) <<std::endl;
    std::cout<<"Darkest secret(o~o): "<<PhoneBook.GetDarkestSecret(selected_index)<<std::endl;
}

void which_contact_info_to_print(std::string prompt, std::size_t nbr_contact, PhoneBook PhoneBook){

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
    display_asked_contact_info(converted_prompt-1, PhoneBook);
}

static void print_info(std::string buffer, std::size_t sizeofprompt){
    
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