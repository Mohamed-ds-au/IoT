#include <stdio.h>
void sort(int numbers[]);
void bubbleSort(int numbers[], int size);
int main()
{
    // Take the size of the array from user
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];

    // Take the numbers of the array from user
    printf("Enter the array numbers: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }

    //calling the bubble sort function
    bubbleSort(numbers, size);
    
    //test sorting
    for(int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

}

// bubble sort function implementaion 
void bubbleSort(int numbers[], int size)
{
    int swap;
    for (int i = 0; i < size; i++)
    {
        swap = 0;
        for (int j = 0; j < size; j++)
        {
            if(numbers[j] > numbers[j+1] && j+1 != size)
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp; 
                swap = 1;
            }
        }

        if (swap == 0)
        {
            break;
        }
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
