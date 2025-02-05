// C Program to Swap Using Temporary Variable

#include <stdio.h>

int main()
{
	int num1, num2;
	printf("number 1: ");
	scanf("%d", &num1);
	printf("number 2: ");
	scanf("%d", &num2);
	
	printf("\n\nBefore Swaping:\n");
	printf("number 1 = %d\n", num1);
	printf("number 2 = %d\n", num2);
	
	int temp = num1;
	num1 = num2;
	num2 = temp;

	printf("\nAfter Swaping:\n");
	printf("number 1 = %d\n", num1);
	printf("number 2 = %d\n", num2);

	return 0;
}

