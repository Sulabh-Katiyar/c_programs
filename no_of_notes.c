//Program to find out the number of notes required for a given amount of money
#include<stdio.h>
void main(void)
{
    int n,choice;
    printf("Enter the amount :");
    scanf("%d",&n);
    printf("Enter the value of note from which you want to start :");
    scanf("%d",&choice);
    switch (choice)
    {
        default:
            printf("Enter valid choice\n");
        case 100:
            printf("Number of 100 rupee note is %d\n",n/100);
            n%=100;
        case 50:
            printf("Number of 50 rupee note is %d\n",n/50);
            n%=50;
        case 20:
            printf("Number of 20 rupee note is %d\n",n/20);
            n%=20;
        case 10:
            printf("Number of 10 rupee note is %d\n",n/10);
            n%=10;
        case 5:
            printf("Number of 5 rupee note is %d\n",n/5);
            n%=5;
        case 2:
            printf("Number of 2 rupee note is %d\n",n/2);
            n%=2;
        case 1:
            printf("Number of 1 rupee note is %d\n",n/1);
    }
    printf("\n");
}