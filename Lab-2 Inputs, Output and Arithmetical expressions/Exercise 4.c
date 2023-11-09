#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2;
    printf("Enter Point X1: ");
    scanf("%f",&x1);
    printf("Enter Point X2: ");
    scanf("%f",&x2);
    printf("Enter Point y1: ");
    scanf("%f",&y1);
    printf("Enter Point y2: ");
    scanf("%f",&y2);
     float x=(x2-x1);
     float y=(y2-y1);
     float d=sqrt(pow(x,2)+pow(y,2));
     printf("\nThe distance is : %f\n",d);
}
