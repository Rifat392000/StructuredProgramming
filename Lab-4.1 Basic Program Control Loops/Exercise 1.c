#include<stdio.h>
#include<conio.h>
int main()
{

    int x=1,i=1;
    while(i<=9)
    {

        x=x*i;
        i=i+1;
        printf("\nThe value of x and i is %d, %d, respectively",x,i);

    }
    getch();
}
