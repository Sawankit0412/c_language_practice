#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("you have entered %d as your age\n", age);
    // start the if else statement
    if (age >= 18)
    {
        printf("you can vote");
    }
    else if (age > 10)
    {
        printf("you can vote after 8 years min");
    }
    else
    {
        printf("you can't vote!");
    }
    return 0;
}

// one another oquestion to slove pass student science and math = 45; rupess
//                                              science = 15; math= 15;
// use if else condtion.