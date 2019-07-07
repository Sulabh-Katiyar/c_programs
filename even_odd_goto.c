//Program to print whether the number is even or odd using goto statement
#include<stdio.h>
void main(void)
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0)
        goto even;
    else
        goto odd;
    even :
        printf("Entered number %d is even",n);
        goto end;
    odd :
        printf("Entered number %d is odd",n);
        goto end;
    end:
       printf("\n"); 
}