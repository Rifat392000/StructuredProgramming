
#include<stdio.h>
#include<math.h>
#include<conio.h>
int weight(int x,int y)
{

    if(x>y)
        return x*x-4*y;
    else if(x<y)
        return x*x+4*y;
    else if(x==y)
        return pow(x+y,3.0/4.0);

}
int main()
{
    int x,y,z;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    z=weight(x,y);
    printf("value of z is=%d\n",z);
    getch();

}
