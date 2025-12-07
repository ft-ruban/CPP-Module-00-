#include "../../includes/ui.hpp"

void prompt_user_loop(PhoneBook &phonebook){

    std::string prompt;
    bool exit_loop = false;
    std::size_t index_contact = 0;
    std::size_t actual_nbr_contact = 0;

    while(!exit_loop){
        std::cout<<"enter one of the following three commands(ADD, SEARCH, EXIT): ";
        std::getline(std::cin, prompt);
        if (prompt.compare("ADD") == 0){
            add_in_contact(prompt, &index_contact, &actual_nbr_contact, phonebook);
        }
        else if (prompt.compare("SEARCH") == 0){
            search_contact(prompt, &index_contact, phonebook, actual_nbr_contact);
            which_contact_info_to_print(prompt, actual_nbr_contact, phonebook);
        }
        else if (prompt.compare("EXIT") == 0){
            set_true_exit_bool(&exit_loop);
        }
        else
            std::cout<<"Last prompt was not \"ADD\" \"SEARCH\" or \"EXIT\" therefore it was ignored, please try again"<<std::endl;
        prompt.clear();
    }
}