#ifndef EXEC_HPP
#define EXEC_HPP

# include "banana_phone.hpp"

//add.cpp
void add_in_contact(std::string prompt, std::size_t *index_contact, std::size_t *nbr_contact, PhoneBook &PhoneBook);

//exec.cpp
void prompt_user_loop(PhoneBook &phoneBook);

//exit.cpp

//search.cpp
void search_contact(std::string prompt, std::size_t *index_contact, PhoneBook &PhoneBook, std::size_t nbr_contact);
void which_contact_info_to_print(std::string prompt, std::size_t nbr_contact, PhoneBook PhoneBook);

#endif