// C Program to Print the Fibonacci Series Using Recursion

/*
Fibonacci Series: 
 - 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
   next number is the sum of 2 previous numbers
*/

#include <stdio.h>

void fibonacci_recursion(int range);

int main()
{
	int range = 0;
	printf("Enter a range to find its fibonacci series: ");
	scanf("%d", &range);		
		
	printf("\n");
			
	fibonacci_recursion(range);
	
	return 0;
}

void fibonacci_recursion(int range)
{
    if (range <= 0)
    {
        return;
	}
    
    int previous_number = 0;
    int current_number = 1;

    printf("%d  ", previous_number); 
    
    printf("%d  ", current_number);  

    for (int i = 2; i < range; i++)
    {
        int next_number = previous_number + current_number;
        printf("%d  ", next_number); 

        previous_number = current_number;
        current_number = next_number;
    }
    
    printf("\n");
}

