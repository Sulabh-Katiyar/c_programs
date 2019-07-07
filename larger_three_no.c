//Program to find largest number from three given numbers
#include<stdio.h>
void main(void)
{
    int n1,n2,n3,large;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
            large=n1;
        else
            large=n3;
    }
    else
    {
        if(n2>n3)
            large=n2;
        else
            large=n3;
    }
    printf("Largest number is %d\n",large);
}
