/*
   Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5) 
*/
#include <stdio.h>
int main(){
   unsigned int no,sum;
   printf("enter any number:");
   scanf("%u",&no);
   sum=no%10;
   while(no>9){
      no=no/10;
   }
   sum=sum+no;
   printf("sum of first and last digit is:%d",sum);
   return 0;
}
