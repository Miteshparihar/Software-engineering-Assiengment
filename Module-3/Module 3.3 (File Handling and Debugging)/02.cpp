/*
    WAP of Addition, Subtraction, Multiplication and Division using Switch
    case.(Must Be Menu Driven) 
*/
#include <stdio.h> 
   
int main() {  
    int num,num1, num2,result;
    printf("press 1 to Addition\npress 2 to substraction\npress 3 to Multiplication\npress 4 to Division\n");
    printf("Enter number to perform any operation.\n");  
    scanf("%d", &num);  
    		printf("Enter num_1:-");
		    scanf("%d",&num1);
		    printf("Enter num_2:-");
		    scanf("%d",&num2);
    switch(num){
        case 1 : 
		    result=num1 + num2 ;
		    printf("Total is %d",result);
            break;
        case 2 : 
            result=num1 - num2 ;
		    printf("Total is %d",result);
            break;
        case 3 : 
            result=num1 * num2 ;
		    printf("Total is %d",result);
            break;
        case 4 : 
            result=num1 % num2 ;
		    printf("Total is %d",result);
            break;
        default: printf("Invalid Input !!!!\n");          
    }
  
    return 0;  
}
