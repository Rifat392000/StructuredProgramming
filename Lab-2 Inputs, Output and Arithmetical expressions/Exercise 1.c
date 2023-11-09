#include<stdio.h>
int main()
{
    double height,width,length;

    printf("Enter height of box: ");
    scanf("%lf",&height);

    printf("Enter length of box: ");
    scanf("%lf",&length);

    printf("Enter height of box: ");
    scanf("%lf",&width);

    double volume =height*length*width;

    printf("\n Volume(cube inches) : %.0lf\n",volume);

    return 0;
}
