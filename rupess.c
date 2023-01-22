/*  Find differenciate in rupees and paisa.
let's start the code 
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int r, p;
    float a;  // a is total amount given
    printf("Enter the value of a =");
    scanf("%f", &a);

    r = a;  
    printf("\ntotal rupees %d \n", r);
    p = (a-r )* 100;  // convert rupess in paisa and use the formula.

    printf("total paisa %d \n", p);
    return 0;

}

/* input = 12.80;
   output= rupees 12
           paisa 80
 */