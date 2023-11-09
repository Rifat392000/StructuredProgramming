#include<conio.h>
#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int i,p=1;
    for(i=1;i<=n;i++)
    {
        p=3*p;
    }
    printf("%d",p);
    getch();
}
