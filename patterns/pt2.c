/*
Q> printf the pattern .
    12345
    12345
    12345
    12345
    12345
*/

#include <stdio.h>

int main() {
  int n;
  printf("Enetr the no is =");
  scanf("%d", &n);
  
  for(int i=1; i<=n; i++){
     for(int j=1; j<=n;j++){
        printf("%d", j);
   }
    printf("\n");
   }

    return 0;
}