#include "../../includes/exec.hpp"

void prompt_user_loop(PhoneBook &phoneBook){

    std::string prompt;
    bool exit = false;
    std::size_t index_contact = 0;
    std::size_t nbr_contact = 0;

    while(!exit){
        std::cout<<"enter one of the following three commands(ADD, SEARCH, EXIT): ";
        std::getline(std::cin, prompt);
        if (prompt.compare("ADD") == 0){
            add_in_contact(prompt, &index_contact, &nbr_contact, phoneBook);
        }
        else if (prompt.compare("SEARCH") == 0){
            search_contact(prompt, &index_contact, phoneBook, nbr_contact);
            which_contact_info_to_print(prompt, nbr_contact, phoneBook);
        }
        else if (prompt.compare("EXIT") == 0){
            std::cout<<"Exit in progress[...]"<<std::endl;
            exit = true;
        }
        else
            std::cout<<"Last prompt was not \"ADD\" \"SEARCH\" or \"EXIT\" therefore it was ignored, please try again"<<std::endl;
        prompt.clear();
    }
}