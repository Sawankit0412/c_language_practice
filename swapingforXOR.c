/* swaping for two number using bitwise operator(^)  XOR 
Let's start code.
*/

#include <stdio.h>

void swap(int *, int *);
int main()
{
    int a, b;
    printf("enter the first no:");
    scanf("%d", &a);
    printf("enter the second no:");
    scanf("%d", &b);
    printf("Before swapping a =%d \n and b=%d", a, b);
    swap(&a, &b);
    printf("\nAfter swapping a= %d and b=%d", a, b);
    return 0;
}

void swap(int * a, int *b){
    *a = *a ^ *b;             // a = 4, b=7;
                              //a =4, 4 ka binary 0110 hota hai.  0110  XOR   
                              //b=7, 7 ka binary 0111 hota hai    0111
                                                               //  ========
                                                               //  0011(3)

    *b = *a ^ *b;                       // a=4, (0 0 1 1)
                                        // b=7, (0 1 1 1)     
                                       //===================
                                             // 0 1 0 0 (4)

    *a= *a ^ *b;
                                        // a=3, (0 0 1 1)
                                       // b=4, (0 1 0 0)
                                         //================
                                        //       0 1 1 1 (7)

}                    
