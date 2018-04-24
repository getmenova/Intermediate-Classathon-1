#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


long long factorialize(int n)
{
    long long s = 1;
    for (int i = 1; i <= n && n != 0; i++)
    {
        s *= i;
    }
    return s;
}

int main( void)
{
    printf("%s\n", "Enter (n) between 1-20:");
    int n = get_int();

    long long o= factorialize(n);
    printf("%llu\n", o);
    return 0;
}