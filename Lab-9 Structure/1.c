
#include<stdio.h>
#include<conio.h>
#define n 20
struct company{
    char name[30];
    float income;
    float cost;
};
int main()
{
    struct company array[n];
    int i;
    float profit[n];
    for(i=0;i<n;i++)
    {

        printf("name : ");
        gets(array[i].name);
         printf("Income : ");
        scanf("%f",&array[i].income);
        printf("cost : ");
        scanf("%f",&array[i].cost);
        profit[i]=array[i].income - array[i].cost;
        getchar();
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",array[i].name);
        printf("profit = %.4f\n",profit[i]);
        printf("\t----------------\n");
    }
getch();
}
