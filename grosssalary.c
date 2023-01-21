/* Q> if his salary is less than Rs. 1500, then HRA=10% of basic salary and DA = 90% of basic salary. 
If his salary is either equal to or above RS.1500, then HRA=Rs.500 and DA=98% of basic salary. 
If the employee's is input through the keybord write a program to find his gross salary.

1. Baisc salary 
2.HRA = House Rent Allowance.
3. DA = Dearness Allowance.
4. Gross salary.

*/

#include<stdio.h>
int main(){

    float BS, DA, GS, HRA;
    printf("Enter the salary  ");
    scanf("%f", &BS);
     if(BS<1500){
         HRA = BS * 10 / 100;
         DA = BS * 90 / 100;
     }
     else{
             HRA = 500;
             DA = BS * 98 / 100;
         }
     GS = BS + HRA + DA; 
     printf("Groass salary in RS in %f", GS); 
     return 0;
}