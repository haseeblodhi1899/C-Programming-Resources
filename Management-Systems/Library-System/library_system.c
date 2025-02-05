//  C Program to Simulate a Library System

#include <stdio.h>

int main()
{
	int num_of_borrow, num_of_return;
	
	// default avialable books = 10
	int available_books = 10;
	
	int option;
	
	do
	{	
		printf("\n");
	
		printf("--- WELCOME TO THE LIBRARY ---\n");
		printf("1. Borrow\n");
		printf("2. Return\n");
		printf("3. Available Book(s)\n");
		printf("0. Exit\n\n");
		printf("Enter the option (0-3): ");
		scanf("%d", &option);
		
		printf("\n");
		
		switch (option)
		{
			case 0:
				printf("Thank you for visiting.\n");
				break;
			
			case 1:
				printf("how many books you want to borrow: ");
				scanf("%d", &num_of_borrow);
			
				if (num_of_borrow <= available_books)
				{
					available_books -= num_of_borrow;
					printf("Borrow section: %d book(s) is/are successfully borrowed", num_of_borrow);
				}
				else
				{
					printf("Borrow section: %d book(s) exceeds the number of avialable books", available_books);	
				}		
				break;
			
			case 2:
				printf("how many books you want to return: ");
				scanf("%d", &num_of_return);
			
				if (num_of_return > 0)
				{
					available_books += num_of_return;
					printf("Return section: %d book(s) successfully returned", num_of_return);
				}
				else
				{
					printf("Error: you can not return invalid number of books");
				}	
				break;
			
			case 3:
				printf("Avialable book(s): %d", available_books);
				break;
					
			default:
				printf("Error: Incorrect option");
		}
		
		printf("\n\n");
		
	}
	while (option != 0);

	return 0;
}



/* XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Write a program to simulate a basic Library Management System. The program should display
a menu with options for borrowing books, returning books, checking the number of available books, 
and exiting the program. Implement the following requirements:
 
Menu Options: 
 1. Borrowing:
    	Ask the user for the number of books they want to borrow.
        If the requested number of books is available, deduct that number from the total available
        books and display a message confirming the borrowing.
        If the requested number is more than the available books, display a message
        that not enough books are available.
 2. Returning:
        Ask the user for the number of books they want to return.
        Add this number to the total available books and display a message confirming the return.
 3. Available Books:
        Display the current count of available books.
 0. Exit:
        End the program.

Loop:
 Continue showing the menu and processing user choices until the user chooses to exit (option 0).
 
Conditions:
 Ensure the total count of books does not go below zero.
 Validate the user’s choice to prevent invalid menu selections.

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX */

