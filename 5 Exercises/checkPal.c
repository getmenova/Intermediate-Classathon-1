#include <stdio.h>
int main()
{
    int n, invinteger = 0, remainder, startint;

    printf("Please enter an integer: "); //prompt for user input - include data type
    scanf("%d", &n);

    startint = n;


    while( n!=0 ) // storing the flipped int
    {
        remainder = n%10;
        invinteger = invinteger*10 + remainder;
        n /= 10;
    }


    if (startint == invinteger) // if equal when flipped then it's a pally!
        printf("Well, well... %d is a palindrome.", startint);
    else
        printf("Womp womp...%d is not a palindrome.", startint); // if not equal then fails the test

    return 0;
}