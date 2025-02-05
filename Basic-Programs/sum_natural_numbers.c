// C Program to Calculate the Sum of Natural Numbers (N = {1, 2, 3, 4, ...})

#include <stdio.h>

int main()
{	
	int how_many = 0;
	printf("Sum of how many natural number(s): ");
	scanf("%d", &how_many);
	
	printf("\n");
	
	int counter1 = 1, sum1 = 0;
	while (counter1 <= how_many)
	{	
		sum1+=counter1;
		counter1++;
	}
	printf("Sum(N) = %d", sum1);
	
	return 0;
}

