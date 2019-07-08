//Program to find out the day of the week from agiven date
/*
Formula for calculating day is 
day=(y+j+f-h+fh)%7
j=julian day of the date
y=year of given date
f=int part of (y-1)/4
h=int part of (y-1)/100
fh=int part of (y-1)/400
 */
#include<stdio.h>
void main(void)
{
    int d,m,y,j,f,h,fh,day;
    printf("Enter the date in DD/MM/YYYY format :");
    scanf("%d/%d/%d",&d,&m,&y);
    j=d;
    switch (m-1)
    {
        case 11:
            j+=30;
        case 10:
            j+=31;
        case 9:
            j+=30;
        case 8:
            j+=31;
        case 7:
            j+=31;
        case 6:
            j+=30;
        case 5:
            j+=31;
        case 4:
            j+=30;
        case 3:
            j+=31;
        case 2:
            j+=28;
        case 1:
            j+=31;
    }
    if(y%4==0 && y%100!=0 || y%400==0)
        if(m!=1 && m!=2)
            j++;
    
    f=(y-1)/4;
    h=(y-1)/100;
    fh=(y-1)/400;

    day=(y+j+f-h+fh)%7;
    switch (day)
    {
        case 0:
            printf("Week Day of given date %d/%d/%d is Saturday\n",d,m,y);
            break;
        case 1:
            printf("Week Day of given date %d/%d/%d is Sunday\n",d,m,y);
            break;
        case 2:
            printf("Week Day of given date %d/%d/%d is Monday\n",d,m,y);
            break;
        case 3:
            printf("Week Day of given date %d/%d/%d is Tuesday\n",d,m,y);
            break;
        case 4:
            printf("Week Day of given date %d/%d/%d is Wednesday\n",d,m,y);
            break;
        case 5:
            printf("Week Day of given date %d/%d/%d is Thursday\n",d,m,y);
            break;
        case 6:
            printf("Week Day of given date %d/%d/%d is Friday\n",d,m,y);
            break;
    }
}