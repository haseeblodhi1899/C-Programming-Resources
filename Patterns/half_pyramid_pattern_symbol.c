// C Program to Generate a Half-Pyramid Pattern of Symbol

#include <stdio.h>

int main()
{
	int height;
	printf("Enter the height: ");
	scanf("%d", &height);
	
	printf("\n");
	
	for (int row = 1; row <= height; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
		
	return 0;
}



/* XXXXXXXXXXXXXX

if height == 5

*
* *
* * *
* * * *
* * * * *

XXXXXXXXXXXXXX */

