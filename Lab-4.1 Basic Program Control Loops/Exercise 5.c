#include<stdio.h>
int main()
{
    int ly1,ly2;
    printf("First year value : ");
    scanf("%d",&ly1);
     printf("second year value : ");
    scanf("%d",&ly2);
    int i,s=0;
    if(ly1<ly2)
    {
        for(i=ly1;i<=ly2;i++)
        {
            if(i%4==0||i%400==0)
            {
                printf("%d\n",i);
               // s++;
            }
        }
    }//printf("%d",s);
    getch();
}

