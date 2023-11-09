#include<stdio.h>
int main()
{
    int the_number_of_computers; float Price_of_each_computer;
    printf("Enter the number of computers: ");
    scanf("%d",&the_number_of_computers);
    printf("Price of each computer: ");
    scanf("%f",&Price_of_each_computer);

    float Bonus,Commission;
    Bonus=200.00*the_number_of_computers;
    Commission=(( the_number_of_computers * Price_of_each_computer) *2/100);
    printf("\nBonus = %.2f\nCommission = %.2f\n",Bonus,Commission);
    return 0;


}
