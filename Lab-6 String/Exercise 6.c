#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char s1[20],s2[22];
    printf("s1=");
    gets(s1);
   int l=strlen(s1);
   int i;
   for( i=0;i<l;i++)
   {
       s2[i]=s1[l-i-1];
   }
   s2[i]='\0';
    printf("%s",s2);
    getch();

}

