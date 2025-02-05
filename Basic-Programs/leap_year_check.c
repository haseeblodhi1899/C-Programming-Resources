// C Program to Check Whether a Year is a Leap Year or Not

#include <stdio.h>

void leapYear(int year);

int main()
{
	int user_year = 0;
	printf ("Enter year: ");
	scanf("%d", &user_year);
		
	printf("\n");
	
	leapYear(user_year);
	
	return 0;
}

void leapYear(int year)
{
    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        printf("%d -> is a Leap Year\n", year);    
    }
    
    // not a leap year if divisible by 100 but not divisible by 400
    else if (year % 100 == 0)
    {
        printf("%d -> is not a Leap Year\n", year);
    }
    
    // leap year if not divisible by 100 but divisible by 4
    else if (year % 4 == 0)
    {
        printf("%d -> is a Leap Year\n", year);    
    }    
    
    // all other years are not leap years
    else
    {
        printf("%d -> is not a Leap Year\n", year);
    }    
}

