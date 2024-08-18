#include <math.h>
#include <stdio.h>

void isPerfectSquare(double number);
void reverseDigits(double number, int digits[], int numberOfDigits);
void calculateSum(int digits[], int numberOfDigits);

int main()
{
    double number;
    int numOfDigits;

    printf("Enter the number of digits: ");
    scanf("%d", &numOfDigits);
    printf("Enter the number: ");
    scanf("%lf", &number);

    int digits[numOfDigits];

    isPerfectSquare(number);
    reverseDigits(number, digits, numOfDigits);
    calculateSum(digits, numOfDigits);
    

}

void isPerfectSquare(double number)
{
    double squareRoot = sqrt(number);
    int perfSquareRoot = (int) squareRoot;
    if (squareRoot == perfSquareRoot)
    {
        printf("The number has a perfect square root which is %d.\n", perfSquareRoot);
    }
    else
    {
        printf("The number does not have a perfect square root, The root is %lf.\n", squareRoot);
    }
}

void reverseDigits(double number, int digits[], int numberOfDigits)
{
    printf("The number reversed is :");
    for(int i = 0; i < numberOfDigits; i++)
    {

        digits[i] = (int)number % (int)pow(10.0, (double)i+1) / (int)pow(10, (double)i);
        printf("%d", digits[i]);
    }
    printf("\n");
}

void calculateSum(int digits[], int numberOfDigits)
{
    int sum = 0;
    for(int i = 0; i < 15; i++)
    {
        sum += digits[i];
    }

    printf("The sum of the digits is: %d", sum);
}
