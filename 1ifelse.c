// one another oquestion to slove pass student science and math = 45; rupess
//                                              science = 15; math= 15;
// use if else condtion.

#include<stdio.h>


int main(){
int rupees;
printf("enter no  student performance \n" );
scanf("%d", &rupees);
//printf("you have pass both  science and math \n ", rupees);
//if statement start.
if(rupees>=45){
    printf("you have pass both science and math\n");
}
else if(rupees>=15)
    {
    printf("you have pass only one subject\n");
}
else
    (rupees >= 10);
{
    printf("you have pass only one subject");
}
return 0;
}
