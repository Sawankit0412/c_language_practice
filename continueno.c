//Q> using continue statement and print natural number.

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the no =");
    scanf("%d", &n);
    int i;
    for(int i=1; i<=n; i++){
        if(i==5){
            continue;
        }
    
    printf("print natural no is %d\n", i);
    }

    return 0;
}