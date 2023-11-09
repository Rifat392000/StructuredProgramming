#include<stdio.h>
int main()
{
    int x,y;
    printf("Please Enter X,Y :");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    printf("This point is in Region 1");
     else if(x<0&&y>0)
    printf("This point is in Region 2");
     else if(x<0&&y<0)
    printf("This point is in Region 3");
     else if(x>0&&y<0)
    printf("This point is in Region 4");
    getch();



}
