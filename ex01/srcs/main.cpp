#include "../includes/banana_phone.hpp"

//TODO 1) voir si le nom de phoneBook est ok ou non

int main(void)
{
    PhoneBook phoneBook;

    std::cout<<"Welcome to Bananaphone"<<std::endl;
    prompt_user_loop(phoneBook);
    return(EXIT_SUCCESS);
}