

#include<stdio.h>
#include<conio.h>
#define n 10
struct rectangle
{

    float width;
    float length;
    float area;
};
int main()
{
    struct rectangle array[n];
    int i;
    for(i=0; i<n; i++)
    {
        printf("Width : ");
        scanf("%f",&array[i].width);
        printf("Length : ");
        scanf("%f",&array[i].length);
        array[i].area=array[i].width * array[i].length;
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Width = %.2f\n",array[i].width);
        printf("length = %.2f\n",array[i].length);
        printf("area = %.4f\n",array[i].area);
        printf("\t----------------\n");
    }
    getch();
}
