//Accpet marks in five subjects and calculate the total percentage marks
#include<stdio.h>
void main (void)
{
    int sub1,sub2,sub3,sub4,sub5,total;
    float percentage;
    printf("Enter marks of five subjects:");
    scanf("%d %d %d %d %d",&sub1, &sub2, &sub3, &sub4, &sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    percentage=(float) total/5;
    printf("Percentage marks is %.2f",percentage);
}