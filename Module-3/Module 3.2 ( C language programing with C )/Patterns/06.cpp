/*
      A
      A B
      A B C
      A B C D
      A B C D E
*/
#include <stdio.h>
 
int main()
{
    int i,j,rows = 5;
 
    // first loop for printing rows
    for ( i = 0; i < rows; i++) {
 
        // second loop for printing character in each rows
        for ( j = 0; j <= i; j++) {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}
