// C Program to Reverse the Digits of a Number

#include <stdio.h>

int main()
{
	int number = 0;
	printf("Enter the number to reverse its digits: ");
	scanf("%d", &number);
		
	printf("\nReversed Order: ");
	
	while (number > 0)
	{
		int last_digit = number % 10; 
		
		printf("%d", last_digit);
		
		number = number / 10;  		
	}
	
	printf("\n");
	
	return 0;
}

