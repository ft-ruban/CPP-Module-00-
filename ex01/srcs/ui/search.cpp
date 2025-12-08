/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:35:51 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/08 09:55:57 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ui.hpp"
#include <sstream>

static void display_asked_contact_info(std::size_t selected_index, PhoneBook PhoneBook)
{
    std::cout<<std::endl<<"First name: "<<PhoneBook.GetFirstName(selected_index)<<std::endl;
    std::cout<<"Last name: "<<PhoneBook.GetLastName(selected_index)<<std::endl;
    std::cout<<"Nickname: "<<PhoneBook.GetNickname(selected_index)<<std::endl;
    std::cout<<"Phone number: "<<PhoneBook.GetPhoneNumber(selected_index) <<std::endl;
    std::cout<<"Darkest secret(o~o): "<<PhoneBook.GetDarkestSecret(selected_index)<<std::endl<<std::endl;
}

static void display_header_phone_book(){
    std::cout<<std::endl;
    std::cout<<"               ♡／人◕ ‿‿ ◕人＼♡              "<<std::endl;
    std::cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<std::endl;
    std::cout<<"|    index|first name| last name|  nickname|"<<std::endl;
}

static void ask_contact_info(std::string prompt, std::size_t nbr_contact, PhoneBook PhoneBook){

    std::size_t converted_prompt = 42;
    bool prompt_is_invalid = true;

    std::cout<<std::endl<<"Which index of the entry to display? :";
    while(converted_prompt > nbr_contact || converted_prompt == 0 || prompt_is_invalid){
        prompt_is_invalid = false;
        if (!std::getline(std::cin, prompt))
            exit(1);
        std::stringstream(prompt) >> converted_prompt;
        for (std::size_t i=0; i < prompt.length();i++){
            if(isdigit(prompt[i]) == false){
                prompt_is_invalid = true;
                break;
            }
        }
        if(converted_prompt > nbr_contact || converted_prompt == 0 || prompt_is_invalid)
            std::cout<<"Invalid index you have at the moment a total number of "<<nbr_contact << " phone contact, try again: ";
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

static void no_contact_found()
{
    std::cout<<"No contact have been found, SEARCH require the user to ADD at least a contact"<<std::endl;
    std::cout<<"Returning to the main menu of Bananaphone"<<std::endl;
    return;
}

void search_contact(std::string prompt, PhoneBook &phonebook, std::size_t total_contacts)
{
    std::string buffer;
    std::size_t sizeofprompt;
    std::size_t i = 0;
    
    if(total_contacts == 0){
        return(no_contact_found());
    }
    display_header_phone_book();
    while(total_contacts > i){
        std::cout<<"|        " << i+1 << "|";
        buffer = phonebook.GetFirstName(i);
        sizeofprompt = buffer.length();
        print_info(buffer, sizeofprompt);
        buffer = phonebook.GetLastName(i);
        sizeofprompt = buffer.length();
        print_info(buffer, sizeofprompt);
        buffer = phonebook.GetNickname(i);
        sizeofprompt = buffer.length();
        print_info(buffer, sizeofprompt);
        std::cout<<std::endl;
        i++;
    }
    std::cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<std::endl;
    ask_contact_info(prompt, total_contacts, phonebook);
}
