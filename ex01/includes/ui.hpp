/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:48:38 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/07 12:55:21 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UI_HPP
#define UI_HPP

#include <iostream>
# include "banana_phone.hpp"

//add.cpp
void add_in_contact(std::string prompt, std::size_t *index_contact, std::size_t *total_contacts, PhoneBook &PhoneBook);

//prompt.cpp
void prompt_user_loop(PhoneBook &phoneBook);

//exit.cpp
void set_true_exit_bool(bool *exit_loop);

//search.cpp
void search_contact(std::string prompt, PhoneBook &PhoneBook, std::size_t nbr_contact);

#endif