#include<stdio.h>
#include<conio.h>
int fact(int n)
{

 if(n==1)
    return 1;
 else
    return n*fact(n-1);
}
int main()
{
   int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int d=fact(n);
    printf("%d",d);

}
