#include<conio.h>
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n number : ");
    scanf("%d",&n);
    int i,s;
    for(i=1,s=0;i<=n;i++)
    {
        s=s+i;
    }
    printf("a) %d",s);
    printf("\n");
    float sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+1.0/i;
    }
    printf("b) %.2f",sum);
    printf("\n");
for(i=2,s=0;i<=n;i=i+2)
{
    s=s+(i-1)*i;
}
printf("c) %d",s);
printf("\n");
for(i=1,s=0;i<=n;i++)
{
    s=s+i*(i+1)*(i+2);
}
printf("d) %d",s);
printf("\n");
int m;
for(i=1,s=0,m=1;i<=n;i++)
{
m=i-1+m;

s=s+m;
}
printf("e) %d\n",s);
getch();
}
