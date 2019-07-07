//Program to perform arithmetic calculations on integers
#include<stdio.h>
void main(void)
{
    int n1,n2,result;
    char operator;
    printf("Enter first number, operator and second number: ");
    scanf("%d%c%d",&n1,&operator,&n2);
    switch(operator)
    {
        case '+':
            printf("Result is %d\n",n1+n2);
            break;
        case '-':
            printf("Result is %d\n",n1-n2);
            break;
        case '*':
            printf("Result is %d\n",n1*n2);
            break;
        case '/':
            printf("Result is %d\n",n1/n2);
            break;
        case '%':
            printf("Result is %d\n",n1%n2);
            break;
        default:
            printf("Enter valid operator\n");
    }
}
