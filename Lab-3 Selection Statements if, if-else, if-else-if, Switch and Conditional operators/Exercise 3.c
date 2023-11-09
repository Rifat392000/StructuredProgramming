#include<conio.h>
#include<stdio.h>
int main()
{

    int grade_number;
    printf("Enter The Number\n");
    scanf("%d",&grade_number);
    if(grade_number>=60)
    {
        printf("\nCongratulation\n");
        printf("\npassed\n");
    }
    else
    {
        printf("\nSorry\n");
        printf("\nFailed\n");
    }
    return 0;
    getch();
}
