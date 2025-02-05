// C Program to Generate a Pascal Pyramid Pattern  

#include <stdio.h>

int main()
{
	int height;
	printf("Enter the height: ");
	scanf("%d", &height);
	
	printf("\n");

	int tempHeight = height;
	
	for (int row = 1; row <= height; row++)
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

	return 0;
}



/* XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Pascal Pyramid Pattern (if height == 5)

           row   spaces(left)  total
    1       1          4         5
   121      2          3         6
  12321     3          2         7
 1234321    4          1         8
123454321   5          0         9

horizontal numbers: maximum number at mid = row number

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX */

