//Program to find the factorial of any number
#include<stdio.h>
void main(void)
{
    int number,n;
    long fact=1;
    printf("Enter the number :");
    scanf("%d",&number);
    n=number;
    if(n<0)
    {
        printf("No factorial of negative number\n");
    }
    else{
        while(n>1)
        {
            fact*=n;
            n--;
        }
        printf("Factorial of %d is %ld\n",number,fact);
    }


}
