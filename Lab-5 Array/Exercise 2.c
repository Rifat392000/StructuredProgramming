#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10];
    int sum,i;
   for(i=0;i<10;i++)
   {
       printf("Enter person %d's score :",i+1);
       scanf("%d",&arr[i]);

   }
   for(i=0,sum=0;i<10;i++)
   {
       sum=sum+arr[i];
   }
   float avg=sum/10.0;
   printf("The average score is %.0f",avg);
   getch();

}
