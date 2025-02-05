// C Program to Check if a Number is Unique or Not

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int number = 0;
	printf("Enter the number: ");
	scanf ("%d", &number);
	
	bool isUnique = true;
	int last_digit = 0, temp_num = 0, temp_digit = 0, original_number = number;

	while (number > 0 && isUnique == true)
	{
		last_digit = number % 10; 
		temp_num = number / 10; 
		
		while (temp_num > 0)
		{
			temp_digit = temp_num % 10;  
			
			if (temp_digit == last_digit) 
			{
				isUnique = false;
				break;
			}
			
			temp_num = temp_num / 10; 
		}
		
		number = number / 10;
	}
	
	if (isUnique)
	{
		printf("\n%d is a Unique Number\n", original_number);
	}
	else
	{
		printf("\n%d is not a Unique Number\n", original_number);
	}

	return 0;
}

