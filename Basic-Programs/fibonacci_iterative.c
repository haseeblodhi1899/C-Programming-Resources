// C Program to Print the Fibonacci Series Using Loops

/*
Fibonacci Series: 
 - 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
   next number is the sum of 2 previous numbers
*/

#include <stdio.h>

void fibonacci(int range);

int main()
{
	int range = 0;
	printf("Enter a range to find its fibonacci series: ");
	scanf("%d", &range);		
		
	printf("\n");
			
	fibonacci(range);
	
	return 0;
}

void fibonacci(int range)
{
	int previous_number = 0;
	int current_number = 1;
	
	int next_number;
	
	printf("%d  ", previous_number);
	
	for (int i = 1; i < range; i++)
	{
		next_number = previous_number + current_number;
		
		printf("%d  ", current_number);
		
		previous_number = current_number;
		current_number = next_number;
	}
	
	printf("\n");	
}

