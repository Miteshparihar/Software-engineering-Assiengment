/*
    Write a program make a summation of given number (E.g., 1523 Ans: -11) 
*/
#include <stdio.h>
 
int sumDigits(int no)
{
    if (no == 0) {
        return 0;
    }
 
    return (no % 10) + sumDigits(no / 10);
}
 
int main()
{
    printf("Total all sum %d", sumDigits(1523));
    return 0;
}
