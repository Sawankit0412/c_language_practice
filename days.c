#include<stdio.h>
int main(){
    int d, m, rm;
    printf("Enter the days"); 
    scanf("%d", &d);

    m = d / 30;
    rm = d % 30;
    printf("month of %d remaning day is %d", m,rm);
    return 0; 
}