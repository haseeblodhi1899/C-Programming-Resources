// C Program to Generate a Hollow Pyramid Pattern

#include <stdio.h>

int main()
{
	int height;
	printf("Enter the height: ");
	scanf("%d", &height);
	
	printf("\n");
	
	int heightTemp = height;
	
	for (int row = 1; row <= height; row++)
	{
		for (int outer_space = 1; outer_space <= (heightTemp - 1); outer_space++)
		{
			printf("  ");			
		}
		heightTemp--;
			
		if (row == 1)
		{
			printf("* ");
		}
		else if (row == height)  
		{
			for (int shape = 1; shape <= 2 * height - 1; shape++) 
			{
				printf("* ");
			}
		}
		else
		{
			printf("* ");
			
			for (int inner_space = 1; inner_space <= 2 * (row - 1) - 1; inner_space++)
			{
				printf("  ");
			}
			
			printf("* ");	
		}
		
		printf("\n");
	}
	
	return 0;
}



/* XXXXXXXXXXXXXXXX

if height == 5

        * 
      *   * 
    *       * 
  *           * 
* * * * * * * * *

XXXXXXXXXXXXXXXX */
	
