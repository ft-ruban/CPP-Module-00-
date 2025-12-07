#include "../../includes/ui.hpp"

static void add_prompt_user(std::string &prompt, std::string message){

    prompt.clear();
    while(prompt.empty()){
        std::cout<<message<<std::endl;
        std::getline(std::cin, prompt);
    }
}

void add_in_contact(std::string prompt, std::size_t *index_contact, std::size_t *nbr_contact, PhoneBook &PhoneBook){

    add_prompt_user(prompt, "First name: ");
    PhoneBook.SetFirstName(prompt, *index_contact);

    add_prompt_user(prompt, "Last name: ");
    PhoneBook.SetLastName(prompt, *index_contact);

    add_prompt_user(prompt, "Nickname: ");
    PhoneBook.SetNickname(prompt, *index_contact);

    add_prompt_user(prompt, "Phone number: ");
    PhoneBook.SetPhoneNumber(prompt, *index_contact);

    add_prompt_user(prompt, "Darkest secret(o~o): ");
    PhoneBook.SetDarkestSecret(prompt, *index_contact);
    
    *index_contact = *index_contact + 1;
    if (*index_contact > *nbr_contact)
        *nbr_contact = *index_contact;
    if(*index_contact == 8)
        *index_contact = 0;
}