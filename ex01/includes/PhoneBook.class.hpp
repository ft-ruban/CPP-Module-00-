#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"
#include <iostream>

class PhoneBook {

  public:

    PhoneBook( void );
    ~PhoneBook( void );
    void SetFirstName(std::string first_name, std::size_t contact){
      _contact_list[contact].SetFirstName(first_name);
    }
    std::string GetFirstName(std::size_t contact){
      return(_contact_list[contact].GetFirstName());
    }
    void SetNickname(std::string nickname, std::size_t contact){
      _contact_list[contact].SetNickname(nickname);
    }
    std::string GetNickname(std::size_t contact){
      return(_contact_list[contact].GetNickname());
    }
    void SetLastName(std::string last_name, std::size_t contact){
      _contact_list[contact].SetLastName(last_name);
    }
    std::string GetLastName(std::size_t contact){
      return(_contact_list[contact].GetLastName());
    }
    void SetPhoneNumber(std::string phone_number, std::size_t contact){
      _contact_list[contact].SetPhoneNumber(phone_number);
    }
    std::string GetPhoneNumber(std::size_t contact){
      return(_contact_list[contact].GetPhoneNumber());
    }
    void SetDarkestSecret(std::string darkest_secret, std::size_t contact){
      _contact_list[contact].SetDarkestSecret(darkest_secret);
    }
    std::string GetDarkestSecret(std::size_t contact){
      return(_contact_list[contact].GetDarkestSecret());
    }

  private:
  
    Contact _contact_list[8];
};


#endif