#include <cctype>
#include <iostream>
#include <string>

//1) check if no args to print the right msg + endline then return(0)
//2) for loop to iterate all parameters
//3) We create a string that will hold the value (to make it easier and safer to modify)
//4) for loop until we finished to iterate inside of the string 
//5) inside the loop we need to cast into an unsigned char for the following reason:
//   if we send a char that is negative it may create an undefined behavior (like the char 'é')
//6) we also need to use a char bcs of how toupper works.
//7) print the converted string and get back at the start of the loop until there is no args lefts
//8) finish with a endl.

int main(int argc, char* argv[]) 
{
   if(argc == 1)
   {
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
       return(0);
   }
   for(int i = 1; i < argc; ++i)
   {
      std::string s = argv[i];
      for (std::size_t j = 0; j < s.size(); ++j)
      {
            unsigned char uc = static_cast<unsigned char>(s[j]);
            s[j] = static_cast<char>(std::toupper(uc));
      }
      std::cout << s;
   }
   std::cout << std::endl;
   return 0;
}