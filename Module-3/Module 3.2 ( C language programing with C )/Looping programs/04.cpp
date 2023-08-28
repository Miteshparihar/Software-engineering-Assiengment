/*
    WAP to print table up to given numbers 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1, n2, i, j;
    printf("Enter the value of n1 (starting point): ");
    scanf("%d", &n1);
    printf("Enter the value of n2 (ending point): ");
    scanf("%d", &n2);
    for(i=n1; i<=n2; i++)
    {
        printf("Table of %d:\n", i);
        for(j=1; j<=10; j++)
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}
