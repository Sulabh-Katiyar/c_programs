//Programs to print the sum of digits of any number
#include<stdio.h>
void main(void)
{
    int number,sum=0,rem;
    printf("Enter any number: ");
    scanf("%d",&number);
    rem=number;
    while(rem>0)
    {
        sum+=rem%10;
        rem=rem/10;
    }
    printf("Sum of the digits of %d is %d\n",number,sum);
}
