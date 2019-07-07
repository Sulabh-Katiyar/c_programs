//Write a program to accept the principle, rate and number of years and calculate simple interest
#include<stdio.h>
void main(void)
{
    int principle,rate,years,sinterest;
    printf("Enter principle, rate and years:");
    scanf("%d %d %d",&principle, &rate, &years);
    sinterest = principle*rate*years;
    printf("Simple interest is %d",sinterest);
}