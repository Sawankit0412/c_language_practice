//2nd method to slove the arthmetic operation
/*#include<stdio.h>

int  main(){
    int a, b, c;

    printf("Enter the 1st  no is\n");
    scanf("%d", &a); 
    printf("Enter the 2nd no is\n");
    scanf("%d", &b);
    c = a + b;

    printf("%d+%d=%d\n", a, b, c);


    c = a - b;
    printf("%d+%d=%d", a, b, c);
    

    return 0;
}*/

//aur ek method to slove arthmetic problem
#include <stdio.h>

int main() {
   int a,b,c;
   printf("enter the 1st no is:\n");
   scanf("%d", &a);
   printf("enter the 2nd no is:\n");
   scanf("%d", &b);
   c=a+b;
   printf(" sum of  no is %d\n",c);
   c=a-b;
   printf("subtract of  no is %d\n",c);
   c=a*b;
   printf("multiples of  no is %d\n",c);
   c=a/b;
printf("divided of  no is %d",c);
    return 0;
}