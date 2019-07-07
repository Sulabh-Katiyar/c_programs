//Program to print Armstrong number between 100 and 999
#include<stdio.h>
void main(void)
{
    int i,j,arm,rem;
    for(i=100;i<1000;i++)
    {
        j=i;
        arm=0;
        while(j>0)
        {
            rem=j%10;
            arm+=rem*rem*rem;
            j/=10;
        }
        if(arm==i)
            printf("%d ",arm);
    }
}