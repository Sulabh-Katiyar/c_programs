//Program to find product of digits of any number
#include<stdio.h>
void main (void)
{
    int number,prod=1,rem;
    printf("Enter the number: ");
    scanf("%d",&number);
    rem=number;
    while(rem>0)
    {
        prod*=rem%10;
        rem/=10;
    }
    printf("Prodct of digits of %d is %d\n",number,prod);
}