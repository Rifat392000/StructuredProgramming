
#include<stdio.h>
#include<conio.h>
int main()
{
    while(1)
    {
        int x;
        printf("Please Enter the number :");
        scanf("%d",&x);
        if(x<0||x>100)
            printf("Invalid Input");
        else if(x>=90&&x<100)
            printf("A\n");
        else if(x>=80&&x<=89)
            printf("B\n");
        else if(x>=70&&x<=79)
            printf("C\n");
        else  if(x>=60&&x<=69)
            printf("D\n");
        else if(x>=0&&x<=59)
            printf("F\n");
        getch();
    }
}
