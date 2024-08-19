#include <stdio.h>
void sort(int numbers[]);
void bubbleSort(int numbers[]);
int main()
{
    int numbers[] = {5, 9, 6, 4, 8};
    //sort(numbers);

    bubbleSort(numbers);

    //test sorting
    for(int i = 0; i < 5; i++)
    {
        printf("%d", numbers[i]);
    }
}



void sort(int numbers[])
{
    int temp;
    for(int i = 0; i < 5 ; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp; 
            }
        }
    }
}

void bubbleSort(int numbers[])
{
    int swap = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(numbers[j] < numbers[j+1] && j+1 != 5)
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp; 
                swap = 1;
            }
            else
            {
                swap = 0;
            }
        }

        if (swap = 0)
        {
            break;
        }
    }
    
}