#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Sample Input : ");
    scanf("%d",&n);
    int term1[10],term2[10],Final[10],attendence[10],class_test_1[10],class_test_2[10],class_test_3[10];
    int i;

    for(i=0; i<n; i++)
    {
        scanf("%d%d%d%d%d%d%d",&term1[i],&term2[i],&Final[i],&attendence[i],&class_test_1[i],&class_test_2[i],&class_test_3[i]);
    }
    int best[n],second_best[n],average[n],total_marks[n];

        for(i=0; i<n; i++)
        {

            if(class_test_1[i]>=class_test_2[i]&&class_test_1[i]>=class_test_3[i])
            {
                best[i]=class_test_1[i];


            }
            else if(class_test_2[i]>=class_test_1[i]&&class_test_2[i]>=class_test_3[i])
            {
                best[i]=class_test_2[i];
            }
            else if(class_test_3[i]>=class_test_1[i]&&class_test_3[i]>=class_test_2[i])
            {
                best[i]=class_test_3[i];
            }

            if(best[i]==class_test_1[i])
            {
                if(class_test_2[i]>class_test_3[i])
                    second_best[i]=class_test_2[i];
                else
                    second_best[i]=class_test_3[i];

            }
            if(best[i]==class_test_2[i])
            {
                if(class_test_1[i]>class_test_3[i])
                    second_best[i]=class_test_1[i];
                else
                    second_best[i]=class_test_3[i];

            }

            if(best[i]==class_test_3[i])
            {
                if(class_test_1[i]>class_test_2[i])
                    second_best[i]=class_test_1[i];
                else
                second_best[i]=class_test_2[i];

            }
            average[i]=(best[i]+second_best[i])/2;
            total_marks[i]=term1[i]+term2[i]+Final[i]+attendence[i]+average[i];
            ///printf("%d",total_marks)

        } printf("\n");
        for(i=0;i<n;i++)
        {

            if(total_marks[i]>=100*90/100)
                printf("case %d:A",i+1);
            else if(total_marks[i]>=100*80/100&&total_marks[i]<100*90/100)
                printf("case %d:B",i+1);
            else if(total_marks[i]>=100*70/100&&total_marks[i]<100*80/100)
                printf("case %d:C",i+1);
            else if(total_marks[i]>=100*60/100&&total_marks[i]<100*70/100)
                printf("case %d:D",i+1);
            else if(total_marks[i]<100*60/100)
                printf("case %d:F",i+1);
                printf("\n");
        }
 getch();
    }
