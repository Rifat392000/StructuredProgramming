#include<stdio.h>
int main()
{
    float r,Area,Perimeter;
    printf("Enter the radius: ");
    scanf("%f",&r);
    Area=3.1415926*r*r;
   Perimeter=2*3.1415926*r;
   printf("\nArea = %f\nPerimeter =%f\n",Area,Perimeter);
   return 0;
}
