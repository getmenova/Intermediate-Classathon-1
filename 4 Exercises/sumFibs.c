#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumFibs(int n)
{
    int sum = 1, prevFib = 1, newFib = 1;

    do
    {
        if (newFib % 2 != 0)
        {
            sum += newFib;
        }
        int temp = prevFib;
        prevFib = newFib;
        newFib += temp;
    } while (newFib <= n);
    return sum;
}



int main( void)
{
    printf("%s\n", "Enter (n) to continue: ");
    int n = get_int();
    int o = sumFibs(n);
    printf("%i\n", o);
    return 0;
}