#include<stdio.h>
#include<cs50.h>

bool isPrime(int number) //check prime or not
{
    for (int i = 1; i < number; i++)//check prime or not
    {
        if (number % i == 0 && i != 1)//check prime or not
        {
            return false;//check prime or not
        }
    }
    return true;
}


int sumPrimes(int number) //if prime, sum it!
{
    int sum = 0;
    for (int i = 2; i <= number; i++)//if prime, sum it!
    {
        if (isPrime(i))//if prime, sum it!
        {
            sum += i;
        }
    }
    return sum;

}

int main(void)
{
  printf("%s\n", "Enter (n) to make it go: ");
  int n = get_int();
  printf("%i\n", sumPrimes(n));
  return 0;
}







/*int main(void)

{

    int input = get_int("Enter number: ");
    if (isPrime(input))
    {
        printf("%i is prime \n", input);
    }

    else
    {
        printf("%i is NOT prime \n", input);
    }
}

//one additional process*/