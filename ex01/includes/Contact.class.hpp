/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:48:45 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/07 12:54:59 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact {

  public:

    Contact( void );
    ~Contact( void );
    void SetFirstName(std::string set_first_name){
      _first_name = set_first_name;
    }
    std::string GetFirstName(){
      return(_first_name);
    }
    void SetNickname(std::string set_nick_name){
      _nickname = set_nick_name;
    }
    std::string GetNickname(){
      return(_nickname);
    }
    void SetLastName(std::string set_last_name){
      _last_name = set_last_name;
    }
    std::string GetLastName(){
      return(_last_name);
    }
    void SetPhoneNumber(std::string set_phone_number){
      _phone_number = set_phone_number;
    }
    std::string GetPhoneNumber(){
      return(_phone_number);
    }
    void SetDarkestSecret(std::string set_darkest_secret){
      _darkest_secret = set_darkest_secret;
    }
    std::string GetDarkestSecret(){
     return(_darkest_secret);
    }
  

  private:
    std::string _first_name;
    std::string _nickname;
    std::string _last_name;
    std::string _phone_number;
    std::string _darkest_secret;
  };


#endif