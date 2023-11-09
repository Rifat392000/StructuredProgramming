#include<stdio.h>
int main()
{
int x = 1, i =1;
do
{
 x = x*i;
 i = i+1;
 printf("\nThe value of x and i is %d, %d, respectively\n", x,i );
}while(i<=9);
getch();

}
