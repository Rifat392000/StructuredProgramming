#include<stdio.h>
#include<conio.h>
int main()
{

    int i,j,n,s=0;
    printf("Enter N number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            s=s+1;
            printf("%d ",s);

        }
        printf("\n");
    }
    getch();
}
