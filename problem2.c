#include <stdio.h>

int main()
{
    float time;
    printf("Enter The Time in seconds: ");
    scanf("%f", &time);
    printf("Time %.2f\n", time);
    float distance;
    float accelaration = 32;

    distance = (accelaration * time * time) / 2.0;
    printf("Distance: %.2f\n", distance);
    return 0;
}