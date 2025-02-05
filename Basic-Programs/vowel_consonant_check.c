// C Program to Check Whether a Character is a Vowel or a Consonant

#include <stdio.h>
#include <ctype.h>

int main()
{	
	char letter;
    printf("Enter the Character/Letter (a-z): ");
	scanf("%c", &letter);
	letter = tolower(letter);
	
	printf("\n");
	
	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' ||
		letter == 'u')
	{
		printf("Vowel\n");
	}
	else
	{
		printf("Consonant\n");
	}

	return 0;
}

