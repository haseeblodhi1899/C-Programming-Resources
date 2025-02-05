// C Program to Find the Factorial Using Recursion

#include <stdio.h>

int factorialRecursion(int number);

int main()
{
	int num = 0;
	printf("Enter a number to find its factorial: ");
	scanf("%d", &num);
	
	printf("\n");
	
	printf("%d! = %d\n", num, factorialRecursion(num));

	return 0;
}

int factorialRecursion(int number)
{	
	if (number == 1)
	{
		return 1;
	}
	else 
	{
		return number * factorialRecursion(number - 1);
	}	
}

