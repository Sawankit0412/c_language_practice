/* swaping of two number using third variable.
Let's code
*/
#include <stdio.h>
int main()
{

    int a, b, temp;

    printf("enter the no of a =");
    scanf("%d", &a);
    printf("enter the no of b =");
    scanf("%d", &b);
    printf("\nBefore swapping \n");
    printf("a: %d \n b: %d", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("\nAfter the swapping\n");
    printf("a:%d\n b:%d", a, b);
}
/* input a=14;
        b=15;

output=
before swapping
a=14;
b=15;
 After swapping
 a=15;
 b=14;
 */