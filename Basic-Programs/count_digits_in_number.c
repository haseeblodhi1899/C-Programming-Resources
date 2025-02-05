// C Program to Count Digits in a Number

#include <stdio.h>

int main()
{
	int number;
	printf("Enter a number to count its digits: ");
	scanf("%d", &number);
	
	int countDigit = 0, forPrintNumber = number;
	
	while (number > 0)
	{
		int lastDigit = number % 10;  
		
		countDigit++;
		
		number = number / 10; 
	}
	
	printf("\nDigit(s) in %d = %d\n", forPrintNumber, countDigit);

	return 0;
}

