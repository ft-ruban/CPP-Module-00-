#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H


class Contact {       // The class

  public:           // Access specifier

    Contact( void ); //constructor
    ~Contact( void ); //destructor
    void SetFirstName(std::string set_first_name){
      first_name = set_first_name;
    }
    void GetFirstName(){
     std::cout<<first_name<<std::endl;
    }
    void SetNickname(std::string set_nick_name){
      nickname = set_nick_name;
    }
    void GetNickname(){
     std::cout<<nickname<<std::endl;
    }
    void SetLastName(std::string set_last_name){
      first_name = set_last_name;
    }
    void GetLastName(){
     std::cout<<last_name<<std::endl;
    }
    void SetPhoneNumber(std::string set_phone_number){
      phone_number = set_phone_number;
    }
    void GetPhoneNumber(){
     std::cout<<phone_number<<std::endl;
    }
    void SetDarkestSecret(std::string set_darkest_secret){
      darkest_secret = set_darkest_secret;
    }
    void GetDarkestSecret(){
     std::cout<<darkest_secret<<std::endl;
    }
  

  private:
    std::string first_name;
    std::string nickname;
    std::string last_name;
    std::string phone_number;
    std::string darkest_secret;
  };


#endif