// C program to find the factorial using Recursion

#include <stdio.h>
int factorial(int);
int main(void)
{
    int n, facto;
    printf("Enter the number you want factorial: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Number is negative.Factorial is not possible!");
    }
    else
    {
        facto = factorial(n);
        printf("%d! = %d", n, facto);
    }
}

int factorial(int n)
{
    int result;
    if (n == 0)
    {
        result = 1;
    }
    else
    {
        result = n * factorial(n - 1);
    }
    return result;
}