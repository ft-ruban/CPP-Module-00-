/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:35:42 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/10 08:29:05 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ui.hpp"

static void add_prompt_user(std::string &prompt, std::string message){

    int i = 0;
    
    prompt.clear();
    while(prompt.empty()){
        std::cout<<message;
        if (!std::getline(std::cin, prompt))
            exit(1);
    }
    while(prompt[i]){
        if(!std::isprint(prompt[i]))
            add_prompt_user(prompt, message);
        i++;
    }
}

void add_in_contact(std::string prompt, std::size_t *index_contact, std::size_t *total_contacts, PhoneBook &phonebook){

    add_prompt_user(prompt, "First name: ");
    phonebook.SetFirstName(prompt, *index_contact);

    add_prompt_user(prompt, "Last name: ");
    phonebook.SetLastName(prompt, *index_contact);

    add_prompt_user(prompt, "Nickname: ");
    phonebook.SetNickname(prompt, *index_contact);

    add_prompt_user(prompt, "Phone number: ");
    phonebook.SetPhoneNumber(prompt, *index_contact);

    add_prompt_user(prompt, "Darkest secret(o~o): ");
    phonebook.SetDarkestSecret(prompt, *index_contact);
    
    *index_contact = *index_contact + 1;
    if (*index_contact > *total_contacts)
        *total_contacts = *index_contact;
    if(*index_contact == 8)
        *index_contact = 0;
}
