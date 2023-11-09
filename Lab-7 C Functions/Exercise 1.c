#include<stdio.h>
#include<conio.h>
int number(int n);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int d=number(n);
    if(d==0)
        printf("prime number\n");
    else
    {
        printf("not prime number\n");
        printf("Minimum factor is %d\n",d);
    }

    getch();
}
int number(int n)
{
    int i,l,c=0;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return i;
            break;
        }
    }
    return c;

}
