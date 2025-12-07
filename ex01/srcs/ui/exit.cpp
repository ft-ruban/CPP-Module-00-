/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:35:45 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/07 12:48:10 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ui.hpp"


void set_true_exit_bool(bool *exit_loop){
    std::cout<<"Exit in progress[...]"<<std::endl;
    *exit_loop = true;
}
