//Program to find the sum of digits of a number untill the sum is reduced to 1 digit
#include<stdio.h>
void main (void)
{
    int sum=0;
    long num;
    printf("Enter the number: ");
    scanf("%ld",&num);
    do
    {
        for(sum=0;num!=0;num/=10)
        {
            sum+=num%10;
        }
        printf("%d\t",sum);
        num=sum;
    }
    while(num/10!=0);
    printf("\n"); 
}