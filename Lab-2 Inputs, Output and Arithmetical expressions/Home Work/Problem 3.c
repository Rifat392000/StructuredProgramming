#include<stdio.h>
#include<math.h>
int main()
{

    float x,f;
    printf("Enter x : ");
    scanf("%f",&x);
    f=(3*pow(x,5))-(5*sqrt(x))-(6*sin(x));
    printf("\nf(x)= %.4f\n",f);
    return 0;

}
