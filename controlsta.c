//program for understand control statement i.e loop.
#include<stdio.h>
void main(){
    int i = 0, num;
    printf("enter number :");
    scanf("%d", &num);
    fflush(stdin);
    printf("Table of given number:");
    for (i = 1; i <= 10; i++){

        printf("\n%d x %d =%d", i, num, i * num);
        printf("\n final vlue of %d, i");
        }
    printf("%d", i);
    
}
