//Program to find the sum and average of 10 positive integers
#include<stdio.h>
void main(void)
{
    int n,sum=0,i;
    float avg;
    printf("Enter 10 positive numbers: \n");
    for(i=0;i<10;)
    {
        printf("Enter number: ");
        scanf("%d",&n);
        if(n<0)
        {
            printf("Please enter only positive number\n");
            continue;
        }
        sum+=n;
        i++;
    }
    avg=sum/10.0;
    printf("Sum is %d and Average is %f\n",sum,avg);
}