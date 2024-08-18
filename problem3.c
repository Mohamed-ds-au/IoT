#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if ((i == 0 || i == 8) && (j > 1))
            {
                printf("%c", c);
            }
            else if ((i == 1 || i == 7) && (j == 1 || j == 4))
            {
                printf("%c", c);
            }
            else if ((i > 1 && i < 7) && (j == 0))
            {
                printf("%c", c);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}