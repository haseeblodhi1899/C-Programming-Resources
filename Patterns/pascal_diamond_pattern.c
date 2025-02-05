// C Program to Generate a Pascal Diamond Pattern

#include <stdio.h>

int main()
{
	int height;
	printf("Enter the height: ");
	scanf("%d", &height);
	
	printf("\n");

	int tempHeight = (height / 2) + 1;
	int tempHeightBelow = (height / 2) + 1;
	
	for (int row = 1; row <= (height / 2) + 1; row++)
	{
		for (int space = 1; space <= tempHeight - 1; space++)
		{
			printf(" ");
		}
		tempHeight--;
				
		int number = 1; 
		
		for (int col = 1; col <= ((2 * row) - 1); col++)
		{
			printf("%d", number);
			
			if (col < row)
			{
				number++;
			}
			else
			{
				number--;
			}
		}
		
		printf("\n");		
	}
	
	for (int row2 = ((height / 2) + 2); row2 <= height; row2++)
	{
		for (int space = 1; space <= row2 - tempHeightBelow; space++)
		{
			printf(" ");
		}
		
		int num = 1; 	       
		for (int col2 = 1; col2 <= (2 * (height - row2) + 1); col2++)
		{
			printf("%d", num);
			
			if (col2 < (height - row2 + 1))
			{
				num++;
			}
			else
			{
				num--;
			}
		}
		
		printf("\n");
	}
	
	return 0;
}



/* XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Pascal Pyramid (if height == 9)

           row   content(col+space)  space   col
    1       1         5                4      1
   121      2         6                3      3
  12321     3         7                2      5
 1234321    4         8                1      7
123454321   5         9                0      9
 1234321    6         8                1      7
  12321     7         7                2      5
   121      8         6                3      3
    1       9         5                4      1

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX */

