//Program to find out the grade of a student when the marks of 4 subjects are given
#include<stdio.h>
void main(void)
{
    int m1,m2,m3,m4,total,percentage;
    char grade;
    printf("Enter marks in 4 different subject :");
    scanf("%d %d %d %d",&m1,&m2,&m3,&m4);
    total=m1+m2+m3+m4;
    percentage=total/4;
    if(percentage>=85)
        grade='A';
    else if(percentage>=70)
        grade='B';
    else if(percentage>=55)
        grade='C';
    else if(percentage>=40)
        grade='D';
    else
        grade='E';

    printf("Percentage is %d and grade is %c\n",percentage,grade);
}