//Program to multiply two numbers without using * operator
#include<stdio.h>
void main(void)
{
    int num1,num2,mul=0,i;
    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);
    for(i=num2;i>=1;i--)
    {
        mul+=num1;
    }
    printf("Multiply is %d of %d and %d\n",mul,num1,num2);
}