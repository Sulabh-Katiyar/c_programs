//Program to print whether the number is eveen or odd
#include<stdio.h>
void main(void)
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number%2==0)
        printf("Entered number is even\n");
    else
        printf("Entered number is odd\n");
}
