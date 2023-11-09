#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char s1[30],s2[30];
    printf("s1=");
    gets(s1);
    printf("s2=");
    gets(s2);
    int l=strlen(s1);
    int i;
    for(i=0; s2[i]!=0; i++)//0 and null('\0')both are same
    {
        s1[i+l]=s2[i];
    }
    s1[i+l]='\0';
    printf("\nstring concatenate=%s",s1);
    getch();

}



