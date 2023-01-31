/* show that  use getchar in c.
getchar basiaclliy used to help print in ASCII value.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    char a, b;
    printf("Enter the  one character \n");
    scanf("%c", &a);
    printf("Enter second character\n");
    scanf("%c", &b);
    b = getchar();
    printf("ASCII value of character %c is = %d", a, b);
    //or 
    // printf("ASCII value of character %c is = %d", b, b);
    getchar();
}
