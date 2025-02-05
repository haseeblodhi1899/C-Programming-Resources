// C Program to Generate a Half-Pyramid Pattern of Numbers

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
			printf("%d ", col);
		}
		
		printf("\n");
	}
		
	return 0;
}



/* XXXXXXXXXXXXXX

if height == 5

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

XXXXXXXXXXXXXX */

