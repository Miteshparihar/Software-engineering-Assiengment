/*
    WAP to take 10 no. Input from user and find out … 
	Sum of even numbers
	Sum of odd numbers 
*/
#include <stdio.h>

int main() {
    int numbers;
    int sum_even = 0;
    int sum_odd = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers);
        if (numbers % 2 == 0) {
            sum_even += numbers;
        } else {
            sum_odd += numbers;
        }
    }

    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
