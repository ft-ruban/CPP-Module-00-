#include <cctype>
#include <iostream>
#include <string>

//1) check if only no args to print the right thing
//2) if there is args convert each char with toupper
//3) end with a endl (\n)

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