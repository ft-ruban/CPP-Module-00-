//#include <cctype>
#include <iostream>

//1) check if only no args to print the right thing
//2) if there is args convert each char with toupper
//3) end with a endl (\n)

int main(int argc, char* argv[]) 
{
   int i = 1;
   int j = 0;
   char ch;

   if(argc == 1)
      std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
   while(argv[i])
   {
      while(argv[i][j])
      {
         ch = toupper((argv[i][j]));
         std::cout << ch;
         j++;
      }
      j = 0;
      i++;
   }
   std::cout << std::endl;
   return 0;
}