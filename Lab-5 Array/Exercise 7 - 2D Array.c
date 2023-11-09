#include<stdio.h>
#include<conio.h>
#define r1 3
#define c1 3
#define r2 3
#define c2 3
int main()
{
    int i,j,f[22][22],s[22][22],k,result[22][22],sum=0;

    if(c1!=r2)
    {
        printf("do it again");
    }
    else
    {
        printf("Input Matrix A :\n");

        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                scanf("%d",&f[i][j]);
            }
        }
        printf("Input Matrix B :\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                scanf("%d",&s[i][j]);
            }
        }
        printf("\n\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                for(k=0; k<c1; k++)
                {
                    sum=sum+f[i][k]*s[k][j];
                }
                result[i][j]=sum;
                sum=0;
            }
        }
        printf("A X B\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }



    }
    getch();
}
