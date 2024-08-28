#include <stdio.h>
int factorial(int number);
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = factorial(number);
    printf("The factorial of %d is: %d", number, result);
}

int factorial(int number)
{

    int factorial = 1;
    for (int i = 0; i < number; i++)
    {
        factorial = factorial * (number - i);
    }

    return factorial;
}

// 20 minutes
