// C Program to Check Whether a Number is Odd or Even

#include <stdio.h>

int main()
{	
	int num = 0;
    printf("Enter the number: ");
	scanf("%d", &num);
	
	printf("\n");
	
	if (num % 2 == 0)
	{
		printf("Even\n");
	}
	else
	{
		printf("Odd\n");
	}

	return 0;
}

