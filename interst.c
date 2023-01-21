/*find the intrest of any given amount
*/

#include<stdio.h>
int main(){
    float p, r, t, si;
    printf("enter the value of total amount = ");
    scanf("%f", &p);
    printf("enter the value of rate = ");
    scanf("%f", &r);
    printf("enter the time duration = ");
    scanf("%f", &t);

    si = (p * r * t) / 100; //si=simple intrest.
    printf("total intrest of given value is %f" , si);
    return 0;
}