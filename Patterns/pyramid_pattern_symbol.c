// C Program to Generate a Pyramid Pattern  

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
			printf(" ");			
		}
		heightTemp--;
		
		for (int col = 1; col <= ((2 * row) - 1); col++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}

