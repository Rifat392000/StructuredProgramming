#include<stdio.h>
int main()
{
    int Ah,Am,As;
    printf("Please Enter Ah = ");
    scanf("%d",&Ah);
    printf("Please Enter Am = ");
    scanf("%d",&Am);
    printf("Please Enter As = ");
    scanf("%d",&As);
    Am=Am+Ah*60;
    As=As+Am*60;
    int Bh,Bm,Bs;
    printf("Please Enter Bh = ");
    scanf("%d",&Bh);
    printf("Please Enter Bm = ");
    scanf("%d",&Bm);
    printf("Please Enter Bs = ");
    scanf("%d",&Bs);
    Bm=Bm+Bh*60;
    Bs=Bs+Bm*60;
    if(As<Bs)
        printf("\nB takes more time.");
    else
        printf("\nA takes more time.");
    getch();
}
