// C Program to Check Whether a Number is Prime

/* 
1. To check if a number is prime, we first need to find its factors.
2. A prime number is a number that has exactly two factors: 1 and itself.

Hint:
 - The process of finding the LCM continues until the final value of the number becomes 1.
 - If number % divisor == 0, then divide the number by the divisor; otherwise, increment the divisor.
*/ 

#include <stdio.h>

int main()
{
	int number = 0;
	printf("Enter the number to check if it is Prime or not: ");
	scanf("%d", &number);
	
	int divisor = 2; 
	
	int factors_count = 0;
	
	int number_temp = number; 
	
	while (number_temp != 1)
	{	
		if (number_temp % divisor == 0)
		{
			number_temp = number_temp / divisor;
			factors_count++;
		}
		else
		{
			divisor++;
		}
	}
	
	if (factors_count == 1)
	{
		printf("\n%d is a Prime Number\n", number);
	}
	else
	{
		printf("\n%d is not a Prime Number\n", number);
	}
	
	return 0;
}

