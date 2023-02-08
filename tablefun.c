// print table using function .
#include<stdio.h>
//delaration / parameter
void table(int n);

int main(){ 
    int n;
    printf("Enter the no  is =");
    scanf("%d", &n);

    table(n); // argument/actual parameter.
}

void table(int n){// parameter/formal parameter.
    for (int i = 1; i<=10; i++){
        printf("%d\n", i*n);
    }
}