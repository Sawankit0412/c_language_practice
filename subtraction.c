//add subtract two no without using  subtraction '-' operator. 
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the no of a");
    scanf("%d%d", &a, &b);
    c = a + (~b) + 1;  //use bitwise operator.
    printf("subtract two no %d and %d is equal %d\n", a, b, c);
    return 0;
} 