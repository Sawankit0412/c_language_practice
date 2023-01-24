/* fing the given value interger is positive or negative.
Let's code 
*/
#include <stdio.h>

int main() {
  int a;
  printf("Eneter the no \n");
  scanf("%d", &a);
  if(a>-1){
      printf("yes this no is positive");
  }
  else{
      printf("this no is negative");
  }
  return 0;
}