#include <iostream>
char a = 'm';
static int b = 50;

int main() {
   char a = 's';

   std::cout << "The static variable : "<< ::b;
   std::cout << "\nThe local variable : " << a;
   std::cout << "\nThe global variable : " << ::a;

   return 0;
}
