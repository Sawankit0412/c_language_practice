/*simple print number and get some data type used.
*/
#include<stdio.h>
int main(){
    int a,  b;
    float c;
    printf("Enter the no of a\n"); //use int data type
    scanf("%d", &a);

    printf("Enter the no of b\n "); //use int data type
    scanf("%d", &b);

     printf("Enter the no of c\n "); // use float data type.
    scanf("%f", &c);
    printf("\n\nA:%d\nB:%d\nC:%f", a, b, c);

    return  0;
}