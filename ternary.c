//Accept any two numbers, if first number is greater than second then print the sum of these two numbers, 
//otherwise print their difference
#include<stdio.h>
void main (void)
{
    int number1,number2,result;
    printf("Enter two numbers:");
    scanf("%d %d",&number1,&number2);
    result= number1>number2?number1+number2:number1-number2;
    printf("Result is: %d",result);
}