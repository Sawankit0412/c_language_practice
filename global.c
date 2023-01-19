/*global variable in c= variable declraed outside the function are called global variable.
let's start the code and make sure you are better understand.
*/
#include <stdio.h>

float pi = 3.14;
int circle(){
    int r = 5;
    double area;
    area = pi * r * r;
    return area;
}

void  main(){
    
    printf("%d", circle());
}