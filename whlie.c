//write a program to convert into character.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int r;
    scanf("%d", &r);

    switch(r){
            case 0:
        printf("\n zero");
        break;
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
        break;
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
    default:
        printf("invalid");
        break;
    }
//switch
 
    return 0;
}