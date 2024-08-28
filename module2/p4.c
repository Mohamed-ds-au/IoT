#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, true, count, number_of_vawels;
    char *string = malloc(size * sizeof(char));
    number_of_vawels = 0;
    size = 0;
    true = 1;
    count = 0;
    printf("\"Please do not forget to hit ctrl + Z after entring the string\"\nEnter your string: ");
    while (true == 1)
    {
        char c = scanf("%c", &string[count]);
        count++;
        size++;
        if (c == '\0')
        {
            true = 0;
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i'|| string[i] == 'o'|| string[i] == 'u' )
        {
            number_of_vawels++;
        }
    }
    printf("The number of vawels is: %d", number_of_vawels);


    
}