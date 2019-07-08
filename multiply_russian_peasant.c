//Program to multiply two numbers by Russian Peasant method
//In russian peasant method first number is devided by 2 and second number is multiplied by two, 
//value of second number mutiplied by 2 is added in sum if first number is not divisble by 2
//19    25 Add
// 9    50 Add
// 4    100 Don't Add
// 2    200 Don't Add
// 1    400 Add
//      
//      475 Final sum

#include<stdio.h>
void main(void)
{
    int n1,n2,sum=0,number1,number2;
    printf("Enter two numbers to multiply :");
    scanf("%d%d",&n1,&n2);
    number1=n1;
    number2=n2;
    while(n1>=1)
    {
        if(n1%2!=0)
            sum+=n2;
        n1/=2;
        n2*=2;
    }
    printf("Multiplication of %d and %d is %d\n",number1,number2,sum);
}