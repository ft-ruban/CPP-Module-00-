/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 10:56:39 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/07 12:36:34 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/banana_phone.hpp"

int main(void)
{
    PhoneBook phonebook;

    std::cout<<"Welcome to Bananaphone"<<std::endl;
    prompt_user_loop(phonebook);
    return(EXIT_SUCCESS);
}
