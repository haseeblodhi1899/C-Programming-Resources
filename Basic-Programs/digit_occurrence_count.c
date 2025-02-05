// C Program to Find the Frequency of Each Digit in a Number

#include <stdio.h>

int main() 
{
    int number;
    int frequency[10] = {0};

    printf("Enter the number: ");
    scanf("%d", &number);
	printf("\n");

    if (number < 0) 
	{
        number = -number;
    }

    if (number == 0) 
	{
        frequency[0] = 1;
    }

    while (number > 0) 
	{
        int digit = number % 10;
        
		frequency[digit]++;         
        
		number = number / 10;            
    }

    for (int i = 0; i < 10; i++) 
	{
        if (frequency[i] > 0) 
		{
            printf("Frequency of %d: %d\n", i, frequency[i]);
        }
    }

    return 0;
}

