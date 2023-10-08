#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int factorial(int);
void perfect_number(int);
void fibonacci(int);
void armstrong_number(int);
int main()
{
    while(1)
    {
        printf("1. Factorial of a number\n");
        printf("2. Perfect number or not\n");
        printf("3. First 100 numbers of Fibonacci series\n");
        printf("4. Armstrong number or not\n");
        printf("5. Exit\n\n");
        int n,input_value,d;
        printf("Enter Your Choice : ");
        scanf("%d",&n);
        printf("\n");
        if(n==1)
        {
            printf("Input Value : ");
            scanf("%d",&input_value);
            if(input_value>0&&input_value>1&&input_value<8)
            {
                d=factorial(input_value);
                printf("\nFactorial of a number is %d",d);
            }
            else
            {
                printf("\nValue must be nonnegative integer and greater than 1 and less than 8");
            }

        }
        else if(n==2)
        {
            printf("Input Value : ");
            scanf("%d",&input_value);
            perfect_number(input_value);
        }
        else if(n==3)
        {
            fibonacci(100);
        }
        else if(n==4)
        {
            printf("Input Value : ");
            scanf("%d",&input_value);
            armstrong_number(input_value);
        }
        else if(n==5)
        {
            printf("Thank You for using the program\n");
            getch();
            exit(0);

        }
        else
        {
            printf("Invalid Choice.Please Try Again");
        }
        printf("\n\n----------------------------\n\n");
    }

}
int factorial(int input_value)
{
    int i,s;
    s=1;
    for(i=input_value; i>=1; i--)
    {
        s=s*i;
    }
    return s;
}
void perfect_number(int input_value)
{
    int i,s=0;
    for(i=1; i<input_value; i++)
    {
        if(input_value%i==0)
        {
            s=s+i;
        }
    }
    if(s==input_value)
        printf("\nPerfect number");
    else
        printf("\nNot perfect number");
}
void fibonacci(int n)
{
    int i,c=0,arr[n];
    arr[0]=0;
    arr[1]=1;
    int f1=arr[0];
    int f2=arr[1];
    for(i=2; i<n; i++)
    {
        arr[i]=f1+f2;
        f1=f2;
        f2=arr[i];
    }
    printf("First 100 numbers of Fibonacci series is :");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
void armstrong_number(int input_value)
{
    int d,s=0;
    int temp=input_value;
    while(temp!=0)
    {
        d=temp%10;
        s=s+d*d*d;
        temp=temp/10;
    }
    if(s==input_value)
    {
        printf("\nArmstrong number");
    }
    else
        printf("\nNot Armstrong number");
}

