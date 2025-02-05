// C Program to Generate a Number Pyramid Pattern

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
		for (int space = 1; space <= (heightTemp - 1); space++)
		{
			printf("  ");			
		}
		heightTemp--;
		
		for (int col = 1; col <= ((2 * row) - 1); col++)
		{
			printf("%d ", col);
		}
		
		printf("\n");
	}
	
	return 0;
}



/* XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
 
   if height == 5		  space on left     row            column (2 * row) - (1)
         1               		4   		 1				  1
       1 2 3                    3            2                3
     1 2 3 4 5                  2            3                5
   1 2 3 4 5 6 7                1            4                7
 1 2 3 4 5 6 7 8 9              0            5 = height       9

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX */

