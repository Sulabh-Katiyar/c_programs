//PProgram to find whether a number is prime or not
#include<stdio.h>
void main(void)
{
    int number,flag=1,i;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(i=2;i<number;i++)
    {
        if(number%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Entered number %d is prime\n",number);
    else
        printf("Entered number %d is not prime\n",number);

}
