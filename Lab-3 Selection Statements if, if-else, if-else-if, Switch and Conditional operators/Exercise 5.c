#include<stdio.h>
int main()
{
    int x;
    printf("sample Input :");
    scanf("%d",&x);
    if(x%4==0&&x%100!=0||x%400==0)
    {
        printf("Leap Year");
    }
    else printf("Not Leap Year");
    getch();
}
