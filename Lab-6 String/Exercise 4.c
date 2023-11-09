#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char s1[20],s2[22];
    printf("s1=");
    gets(s1);
    printf("s2=");
    gets(s2);
    int i,j,c1,c2;
    for(i=0,c1=0;s1[i]!='\0';i++)
        c1++;
        for(j=0,c2=0;s2[j]!='\0';j++)
        c2++;

    printf("\n%d\n%d",c1,c1);
    getch();

}


