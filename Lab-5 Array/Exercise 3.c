#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10];
    int n,i;
    printf("n=");
    scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     arr[i]=i;
   }
   for(i=0;i<n;i++)
   {
       if(arr[i]%2==0)
       {
           arr[i]=arr[i]*3;
       }
   }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

  getch();
}

