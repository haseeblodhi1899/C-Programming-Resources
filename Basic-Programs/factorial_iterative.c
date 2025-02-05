// C Program to Find the Factorial Using Loops

#include <stdio.h>

void factorial(int number);

int main()
{
	int num = 0;
	printf("Enter a number to find its factorial: ");
	scanf("%d", &num);
	
	printf("\n");
	
	factorial(num);

	return 0;
}

void factorial(int number)
{	
	int result = number; 
	int numTemp = number;  
	
	while (numTemp > 1)
	{
		result = result * (numTemp - 1);  
		
		numTemp--;                       
	}	
	
	printf("%d! = %d\n", number, result);	
}

