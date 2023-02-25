/* Q> print pattrens for rectangle.
     *****
     *****
     *****

*/

// #include<stdio.h>
// int main(){
//     int n;   
//     printf("Enter the no of n is =");
//     scanf("%d", &n);  
//     for (int i = 1; i <= 4; i++){

//         for (int j = 1; j <= 5; j++){
//              printf("*");
        
//         }
//             printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n, m;
    printf("Enter the no of rows is =");
    scanf("%d", &n);

    printf("Enter the no of colums is =");
    scanf("%d",&m);
    for (int i = 1; i <= n; i++){ //outer loop-> no of lines -> rows.

        for (int j = 1; j <= m; j++){ // inner loop ->no of stars in each line -> colums.
             printf("*");
        
        } 
            printf("\n"); // next line
    }

    return 0;
}
