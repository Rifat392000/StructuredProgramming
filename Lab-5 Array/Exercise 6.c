#include<stdio.h>
#include<conio.h>
int main()
{
    int A[50],n,i;
    printf("Input number of elements in the array:");
    scanf("%d",&n);
    printf("Input values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int min=A[0];
    for(i=1;i<n;i++)
    {
        if(min>A[i])
        {
            min=A[i];
        }
    }
    printf("The SMALLEST value is:%d",min);
    getch();
}
