//Program to convert decimal number into octal and hexadecimal
#include<stdio.h>
void main(void)
{
    int decimal;
    printf("Enter number in decimal:");
    scanf("%d",&decimal);
    printf("%d is equal to %o in octal and %x in hexadecimal\n",decimal,decimal,decimal);
}