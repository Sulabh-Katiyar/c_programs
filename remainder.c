//Enter a 5 digit number and print the value of remainder after deviding by 3
#include<stdio.h>
void main(void)
{
    int number,remainder;
    printf("Enter the five digit number:");
    scanf("%d",&number);
    remainder = number%3;
    printf("Remainder is %d after deviding %d by 3\n",remainder,number);
}