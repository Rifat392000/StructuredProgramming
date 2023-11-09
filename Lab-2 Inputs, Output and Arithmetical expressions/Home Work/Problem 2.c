#include<stdio.h>
int main()
{

    float M,Y,K;
    printf("Miles : ");
    scanf("%f",&M);
    printf("Yards : ");
    scanf("%f",&Y);
    M=M+(Y/1760);
    K=M*1.609;
    printf("\nThe distance in kilometer is: %fKm\n",K);
    return 0;

}
