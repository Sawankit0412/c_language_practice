/*global and local variable in c
*/

// first question slove

#include<stdio.h>

int x = 15; //global variable 

int main(){
    int y = 23; // local variable;
    {
       extern  int x;
        printf("print the value of x in global variable %d\n", x);
        // scanf("%d", &x);
   }

    printf("print the value of y in loacal variable %d\n", y);
    //scanf("%d", &y);
    getchar();
    return 0;

}

