//Q> write a function that prints Namaste if user is india & Bonjour if the user is French.

#include <stdio.h>
void nameste();
void bonjour();

int main() {
    char  ch;
    printf("enter the char if india for i and french for f=");
    scanf("%c",&ch);
    if(ch=='i'){
        nameste();
    }
    else{
        bonjour ();
    }

    return 0;
}

void nameste(){
    printf("nameste");
}
void bonjour(){
    printf("bonjour");
}