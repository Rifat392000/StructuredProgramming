#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[150],i;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&arr[i]);
    }
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;

    for(i=1; i<=100; i++)
    {
        if(arr[i]<0)
        {
            c1++;
        }
        else if(0<=arr[i]&&arr[i]<=100)
        {
            c2++;
        }
        else if(101<=arr[i]&&arr[i]<=200)
        {
            c3++;
        }
        else if(201<=arr[i]&&arr[i]<=300)
        {
            c4++;
        }
        else if(301<=arr[i]&&arr[i]<=400)
        {
            c5++;
        }
        else if(401<=arr[i])
        {
            c6++;
        }
    }
    printf("Less than 0 = %d\n",c1);
    printf("0 - 100 = %d\n",c2);
    printf("101 - 200 = %d\n",c3);
    printf("201 - 300 = %d\n",c4);
    printf("301 - 400 = %d\n",c5);
    printf("401 and above = %d\n",c6);
    getch();
}
