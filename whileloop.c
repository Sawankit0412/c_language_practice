//write a program to convert numbers into character.
#include<stdio.h>
#include<stdlib.h>

int main(){
    long int n, sum = 0, r;
    system("clear");
    puts("enter the number = ");
    scanf("%d", &n);
   while(n>0){
        r = n / 10;
    }
    n = sum;
    while (n>0)
    {
        r = n % 10;
    }
    switch(r){
    case 1:
        printf("\n one");
        break;
    case 2:
        printf("\n two");
        break;
    case 3:
        printf("\n three");
        break;
    case 4:
        printf("\n four");
     case 5:
        printf("\n five");
        break;
    case 6:
        printf("\n six");
        break;
    case 7:
        printf("\n seven");
        break;
    case 8:
        printf("\n enight");
        break;
    case 9:
        printf("\n nine");
        break;
    case 0:
        printf("\n zero");
        break;
    default:
        printf("invalid");
        break;
    }
//switch
    n = n / 10;
    return 0;
}
