//WAP Find out length of string without using inbuilt function
#include <stdio.h>
int main() {
    char s[100];
    int length,i;
	printf("enter your string");
	scanf("%s",&s);
    for (i = 0; s[i] != '\0'; ++i);
    {
    	length++;
	}
    printf("Length of the string: %d", i);
    return 0;
}
