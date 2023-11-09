#include<stdio.h>
int main()
{
int C;
    float F;
    printf("Enter Fahrenheit Temperature: ");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("\nTemperature in Fahrenheit: %f",F);
    printf("\nTemperature in Celsius: %d\n",C);
    return 0;

}
