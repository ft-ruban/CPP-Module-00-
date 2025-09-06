#include <iostream>
using namespace std;

int ft_islower(char c)
{
   if(c >= 'a' && c <= 'z')
      return(1);
   return(0);
}

void argument_provided(char *argv[], int argc)
{
   int   i;
   int   j;
   char  c;

   i = 1;
   j = 0;
   while(i < argc)
   {
      while(argv[i][j])
      {
         c = argv[i][j];
         if(ft_islower(c))
            c -= 32;
         std::cout << c;
         j++;
      }
      j = 0;
      i++;
   }
   std::cout << std::endl;
}

// main() is where program execution begins.
int main(int argc, char* argv[]) 
{
   if(argc == 1)
      std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
   else
      argument_provided(argv, argc);
   return 0;
}