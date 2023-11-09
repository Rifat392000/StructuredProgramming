#include<stdio.h>
int main()
{
    int x,y;
    printf("Sample Input : ");
    scanf("%d%d",&x,&y);
    int Q,R;

     if(y==0)
    {
        printf("\nError!!can't divide");
    }
   else if(x>y)
    {
        Q=x/y;
        R=x%y;
        printf("Q=%d R=%d",Q,R);
    }
    getch();

}
