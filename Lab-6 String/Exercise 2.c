#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char s1[30],s2[30];
    printf("s1=");
    gets(s1);
    int i;
    for(i=0; s1[i]!=0; i++) //0 and null('\0')both are same
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("\ns2=%s",s2);
    getch();

}


