#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100],f0=0,f1=1,sum;
    arr[0]=f0,arr[1]=f1;
    int n,i;
    printf("How many Fibonacci numbers you want to generate:");
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        sum=f0+f1;
        arr[i]=sum;
        f0=f1;
        f1=sum;
    }
    printf("The series is :");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}
