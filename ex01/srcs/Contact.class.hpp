#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H


class Contact {       // The class

  public:           // Access specifier

    Contact( void ); //constructor
    ~Contact( void ); //destructor
    void SetFirstName(std::string set_first_name){
      first_name = set_first_name;
    }
    std::string GetFirstName(){
      return(first_name);
    }
    void SetNickname(std::string set_nick_name){
      nickname = set_nick_name;
    }
    std::string GetNickname(){
      return(nickname);
    }
    void SetLastName(std::string set_last_name){
      last_name = set_last_name;
    }
    std::string GetLastName(){
      return(last_name);
    }
    void SetPhoneNumber(std::string set_phone_number){
      phone_number = set_phone_number;
    }
    std::string GetPhoneNumber(){
      return(phone_number);
    }
    void SetDarkestSecret(std::string set_darkest_secret){
      darkest_secret = set_darkest_secret;
    }
    std::string GetDarkestSecret(){
     return(darkest_secret);
    }
  

  private:
    std::string first_name;
    std::string nickname;
    std::string last_name;
    std::string phone_number;
    std::string darkest_secret;
  };


#endif