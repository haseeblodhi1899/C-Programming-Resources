// C Program to Find the Largest Among Three Numbers

#include <stdio.h>

int main()
{
	int num1, num2, num3;
	printf("Enter number 1: ");
	scanf("%d", &num1);	
	printf("Enter number 2: ");
	scanf("%d", &num2);	
	printf("Enter number 3: ");
	scanf("%d", &num3);	
	
	printf("\n");
	
	if (num1 > num2 && num1 > num3)
	{
		printf("number 1 (%d) is greatest\n", num1);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("number 2 (%d) is greatest\n", num2);
	}
	else
	{
		printf("number 3 (%d) is greatest\n", num3);
	}

	return 0;
}

