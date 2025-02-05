// C Program to Create a Table 

#include <stdio.h>

void table(int number);

int main()
{	
	int number = 0;
	printf("Enter a number to generate its table: ");
	scanf("%d", &number);
	printf("\n");
	
	table(number);

	return 0;
}

void table(int number)
{
	if (number <= 0)
	{
		return;
	}
	
	for (int tableCounter = 1; tableCounter <= 10; tableCounter++)
	{
		printf("%d * %d = %d\n", number, tableCounter, number * tableCounter);
	}
}

