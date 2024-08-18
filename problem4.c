#include <stdio.h>

#define CONSTANT1 331.3
#define CONSTANT2 0.61 
int main()
{
    float firstTemp;
    float lastTemp;
    printf("Enter the first temprature: ");
    scanf("%f", &firstTemp);
    printf("Enter the last temprature: ");
    scanf("%f", &lastTemp);
    for(float i = firstTemp; i <= lastTemp; i++)
    {
        float velocity = CONSTANT1 +  CONSTANT2 * i;
        printf("At %.2f degrees Celsius the velocity of sound is %.1f m/s\n", i, velocity);
    }

}