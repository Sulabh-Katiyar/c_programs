//Program to convert a binary number into decimal number
#include<stdio.h>
void main(void)
{
    int n,binary,decimal=0,mul=1,rem;
    printf("Enter a binary number :");
    scanf("%d",&binary);
    n=binary;
    while(n>0)
    {
        rem=n%10;
        decimal+=rem*mul;
        mul*=2;
        n/=10;     
    }
    printf("Binary number %d is equal to %d in decimal\n",binary,decimal);
}
