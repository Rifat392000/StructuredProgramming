#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char s[20];
    printf("Enter a string=");
    gets(s);
   char s1[20];

    int i;
    for(i=0; s[i]!=0; i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
           s1[i]=s[i]-32;

        }
    }
    s1[i]='\0';
    printf("string=%s",s1);
    getch();

}

