//Program to find difference between two dates in years, month, days
#include<stdio.h>
void main(void)
{
    int d1,d2,m1,m2,y1,y2,d,m,y;
    printf("Enter first date in DD/MM/YYYY format: ");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Enter second date in DD/MM/YYYY format: ");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    if(d2<d1)
    {
        if(m2==3)
        {
            if(y2%4==0 && y2%100!=0 || y2%400==0)
                d2+=29;
            else
                d2+=28;
        }
        else if(m2==5 || m2==7 || m2==10 || m2==12)
            d2+=30;
        else 
            d2+=31;
        m2--;
    }
    if(m2<m1)
    {
        y2--;
        m2=m2+12;
    }
    d=d2-d1;
    m=m2-m1;
    y=y2-y1;
    printf("Difference between two dates is %d year(s) %d month(s) %d day(s)\n",y,m,d);
}

