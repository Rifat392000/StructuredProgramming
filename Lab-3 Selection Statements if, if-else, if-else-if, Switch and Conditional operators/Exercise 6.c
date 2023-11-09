#include<stdio.h>
int main()
{
    int x;
    printf("Please Enter your number :");
    scanf("%d",&x);
    x=x+1;
    if(x%2==0)
    {
        printf("\nThe number you entered is ODD");
    }
    else printf("\nThe number you entered is EVEN");
    getch();
}
