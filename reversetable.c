//Q> print table in reverse order.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the no=");
    scanf("%d", &n);
    int table=1;
     for(int i=10; i>=1; i--){
         table= i*n;
     printf("%d\n", table);
     }
     
}
      