// C Program to Check if a Number is a Perfect Square or Not Without Using Built-In Library Functions [such as sqrt()]

#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare(int num);

int main(void)
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectSquare(num) == true)
    {
        printf("\n%d is a perfect square (True)\n", num);
    }
    else
    {
        printf("\n%d is not a perfect square (False)\n", num);
    }

    return 0;
}

bool isPerfectSquare(int num)
{
    // If the number is negative, it cannot be a perfect square
    if (num < 0) 
    {
        return false;
    }

    // Start with 0 and increment until we find a number whose square equals num
    int tempNum = 0;
    while (tempNum * tempNum < num) 
    {
        tempNum++;
    }

    // If tempNum^2 is equal to num, it's a perfect square
    if (tempNum * tempNum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}



/*

Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, it is the product of
some integer with itself.

You must not use any built-in library function, such as sqrt.

Create a function:
 - bool isPerfectSquare(int num) {}

Example 1:
Input: num= 16
Output: true
Explanation: We return true because 44 = 16 and 4 is an integer.

Example 2:
Input: num = 14
Output: false
Explanation: We return false because 3.742* 3.742 = 14 and 3.742 is not an integer.

*/

