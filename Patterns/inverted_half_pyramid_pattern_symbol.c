// C Program to Generate an Inverted Half-Pyramid of Sumbol

#include <stdio.h>

int main()
{
	int height;
	printf("Enter the height: ");
	scanf("%d", &height);
	
	printf("\n");
	
	for (int row = height; row >= 1; row--)
	{
		for (int col = 1; col <= height; col++)
		{
			printf("* ");
		}
		
		printf("\n");
		height--;
	}
			
	return 0;
}



/* XXXXXXXXXXXXXX

if height == 5

* * * * *
* * * *
* * *
* * 
*

XXXXXXXXXXXXXX */

