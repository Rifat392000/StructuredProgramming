#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    fibonacci(n);
    getch();
}
void fibonacci(int n)
{
    int i,f[n],t1,t2;
    f[0]=0;
    f[1]=1;
    t1=f[0];
    t2=f[1];
    for(i=2; i<=n; i++)
    {
        f[i]=t1+t2;
        t1=t2;
        t2=f[i];

    }
    printf("First 7 Fibonacci numbers are:");
    for(i=1; i<=n; i++)
    {
        printf("%d ,",f[i]);
    }
}
