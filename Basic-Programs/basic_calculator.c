// C Program to Create a Simple Calculator

#include <stdio.h>

int main()
{
    int option = 0, num1 = 0, num2 = 0;
    printf("-- SIMPLE CALCULATOR --\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("0. Exit\n\n");
    printf("Enter the option (1-4) or (0) to stop: ");
    scanf("%d", &option);
    
    if (option == 0)
    {
        printf("\nExiting...\n");
    }
    else if (option >= 1 && option <= 4)
    {
        printf("\n\tEnter number 1: ");
        scanf("%d", &num1);
        printf("\tEnter number 2: ");
        scanf("%d", &num2);
        
        printf("\n");
        
        if (option == 1)
        {
        	printf("\tAddiotion (integer):\n");
            printf("\t%d + %d = %d\n", num1, num2, (num1 + num2));
        }
        else if (option == 2)
        {
        	printf("\tSubtraction (integer):\n");
            printf("\t%d - %d = %d\n", num1, num2, (num1 - num2));
        }
        else if (option == 3)
        {
        	printf("\tMultiplication (integer):\n");
            printf("\t%d x %d = %d\n", num1, num2, (num1 * num2));
        }
        else if (option == 4)
        {
            if (num2 != 0)
            {
            	printf("\tDivision (integer, without truncation):\n");
                printf("\t%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            }
            else
            {
                printf("\tError: Division by zero is not allowed.\n");
            }
        }
    }
    else
    {
        printf("\nError: Incorrect option.\n");
    }
    
    return 0;
}

