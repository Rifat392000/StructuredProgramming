#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char s[20],ch;
    printf("Enter a string=");
    gets(s);
    printf("Enter a character=");
    scanf("%c",&ch);
    int c=0;
    for(int i=0; s[i]!=0; i++)
    {
        if(s[i]==ch)
        {
            c++;
        }
    }
    printf("frequency=%d",c);
    getch();

}
