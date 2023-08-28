/*
             WAP to show
      1. Monday to Sunday using switch case
      2. Vowel or Consonant using switch case 
*/

// 1. Monday to Sunday using switch case
#include <stdio.h>

int main() {
    int day;
    char ch;
    // Input a number representing the day (1 for Monday, 2 for Tuesday, etc.)
    printf("Enter a number (1-7) representing the day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    printf("Enter a character: ");
    scanf(" %c", &ch); 
    switch (ch) {
        case 'A':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'E':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'I':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'O':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        case 'a':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'e':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'i':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'o':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }


    return 0;
}


