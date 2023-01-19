/* local variable in c 
let's code.
*/
#include<stdio.h>

int x = 50;
 int main(){
       int x = 10;
      {
          extern int x;
          printf("print the value of x is %d\n", x); // local variable.
    }

     printf("print the value of x is %d\n", x); // global variable.
     return 0;

 }