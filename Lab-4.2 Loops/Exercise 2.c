#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s=0;
    printf("n = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%3==0)
        {

            s=s+i*i;
        }
    }
    printf("%d",s);
    getch();
}
