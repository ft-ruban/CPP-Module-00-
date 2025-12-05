#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "Contact.class.hpp"

class PhoneBook {       // The class

  public:           // Access specifier

    PhoneBook( void ); //constructor
    ~PhoneBook( void ); //destructor
    void SetFirstName(std::string first_name, std::size_t contact){
      contact_list[contact].SetFirstName(first_name);
    }
    void GetFirstName(void){
      contact_list[0].GetFirstName();
    }
    void SetNickname(std::string nickname, std::size_t contact){
      contact_list[contact].SetNickname(nickname);
    }
    void GetNickname(void){
      contact_list[0].GetNickname();
    }
    void SetLastName(std::string last_name, std::size_t contact){
      contact_list[contact].SetLastName(last_name);
    }
    void GetLastName(void){
      contact_list[0].GetLastName();
    }
        void SetPhoneNumber(std::string phone_number, std::size_t contact){
      contact_list[contact].SetPhoneNumber(phone_number);
    }
    void GetPhoneNumber(void){
      contact_list[0].GetPhoneNumber();
    }
    void SetDarkestSecret(std::string darkest_secret, std::size_t contact){
      contact_list[contact].SetDarkestSecret(darkest_secret);
    }
    void GetDarkestSecret(void){
      contact_list[0].GetDarkestSecret();
    }

  private:
  
    Contact contact_list[8];
};


#endif