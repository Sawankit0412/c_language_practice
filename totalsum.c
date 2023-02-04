// Q> sum of   total  number  input number in user like 5 = 1+2+3+4+5=15;
#include <stdio.h>

int main() {
    int n;
    printf("Enter the no=");
    scanf("%d", &n);
    int sum = 0;
     for(int i=1; i<=n; i++){
         sum = sum+i;
     }
     printf("%d", sum);
     return 0;
     
}
      