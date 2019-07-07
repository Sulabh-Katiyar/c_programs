//Program to find sum of series upto n terms
//1+2+4+7+11+16+...
#include<stdio.h>
void main(void)
{
    int sum=0,term,n=1,i;
    printf("Enter number of terms: ");
    scanf("%d",&term);
    for(i=0;i<term;i++)
    {
        n+=i;
        sum+=n;
    }
    printf("Sum of the series up to %d terms is %d\n",term,sum);
}