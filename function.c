// function kese work karta hai .
//example

#include <stdio.h>
//declaration/prototype 
  void printhello();
  void printgoodbye();

  int main()
  {
      printhello(); // function call
      printgoodbye();
      return 0;
}
//function definition 
void printhello(){
      printf("hello\n");
}
void printgoodbye(){
      printf("goodbye");
}