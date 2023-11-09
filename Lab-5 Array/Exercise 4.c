#include<stdio.h>
#include<conio.h>
int main()
{
    int A[100],B[100];
    int n,i;
    printf("Input the size of the array A:");
    scanf("%d",&n);
    printf("Input the values of A :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);

    }
    for(i=0; i<n; i++)
    {
        B[i]=A[n-1-i];
    }
    printf("Array B:");
    for(i=0; i<n; i++)
    {
        printf("%d ",B[i]);
    }
    getch();
}

