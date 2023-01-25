/* use logical AND
operator in c language.
*/

#include<stdio.h>
//#include<conio.h>
#include <stdlib.h>

int main(){

    int a;
   // clrscr();

    a = (2 < 1) && (4 < 3);
    {
        printf("\n(2<1) &&(4<3) = %d", a);
    }
        a = (2 < 1) && (4 > 3);{
            printf("\n(2 < 1) && (4 > 3) = %d" , a);
        }

        a = (2 > 1) && (4 < 3);{
            printf("\n(2 > 1) && (4 < 3) = %d" , a);
        }

         a = (2 >1) && (4 > 3);{
            printf("\n(2 > 1) && (4 > 3) = %d" , a);
        }
      //  getch();
        return 0;
    }
    

