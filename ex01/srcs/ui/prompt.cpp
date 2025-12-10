/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:35:47 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/08 09:56:46 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ui.hpp"

void prompt_user_loop(PhoneBook &phonebook){

    std::string prompt;
    bool exit_loop = false;
    std::size_t index_contact = 0;
    std::size_t total_contacts = 0;

    while(!exit_loop){
        std::cout<<"enter one of the following three commands(ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, prompt))
            exit(1);
        if (prompt.compare("ADD") == 0)
            add_in_contact(prompt, &index_contact, &total_contacts, phonebook);
        else if (prompt.compare("SEARCH") == 0)
            search_contact(prompt, phonebook, total_contacts);
        else if (prompt.compare("EXIT") == 0)
            set_true_exit_bool(&exit_loop);
        else
            std::cout<<"Last prompt was not \"ADD\" \"SEARCH\" or \"EXIT\" therefore it was ignored, please try again"<<std::endl;
        prompt.clear();
    }
}
