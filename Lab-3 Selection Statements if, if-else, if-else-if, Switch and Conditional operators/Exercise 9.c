#include<stdio.h>
int main()
{
    int a,b,c,max,medium,min;
    printf("please Enter a :");
    scanf("%d",&a);
    printf("please Enter b :");
    scanf("%d",&b);
    printf("please Enter c :");
    scanf("%d",&c);

    if(a>=b&&a>=c)
    {
        max=a;


    }
    else if(b>=c&&b>=a)
    {
        max=b;
    }
    else if(c>=a&&c>=b)
    {
        max=c;
    }

    if(max==a)
    {
        if(b>=c)
            medium=b;
        else
            medium=c;

    }
    if(max==b)
    {
        if(a>=c)
            medium=a;
        else
            medium=c;

    }
    if(max==c)
    {
        if(a>=b)
            medium=a;
        else
            medium=b;

    }
    if(a<=b&&a<=c)
        min=a;
    else if(b<=a&&b<=c)
        min=b;
    else if(c<=a&&c<=b)
        min=c;

printf("Min= %d, Max= %d, Medium= %d\n",min,max,medium);



}
