//Program to generate fibonacci series upto given term
#include<stdio.h>
void main(void)
{
    int term,x=0,y=1,i,z;
    printf("Enter the number of terms: ");
    scanf("%d",&term);
    if(term>0)
    {
        printf("%d ",y);
        for(i=1;i<term;i++)
        {
            z=x+y;
            printf("%d ",z);
            x=y;
            y=z;
        }
    }
}