// C Program to Generate the Square and Cube of a Number

#include <stdio.h>
#include <math.h>

int main()
{
	int number = 0;
	printf("Enter a number to find its cube and square: ");
	scanf("%d", &number);
	
	printf("\nNumber: %d\n", number);
	printf("Square: %d\n", (int) pow(number, 2));
	printf("Cube: %d\n", (int) pow(number, 3));

	return 0;
}

