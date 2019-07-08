//Program to check whether a date is valid or not
//Assume that dates between years 1850 and 2050 are valid
#include<stdio.h>
void main(void)
{
    int day,month,year;
    int flag=1,isleap=0;
    printf("Enter the date in DD/MM/YYYY format: ");
    scanf("%d/%d/%d",&day,&month,&year);
    if(year%4==0 && year%100!=0 || year%400==0)
        isleap=1;
    if(year<=1850 || year>=2050)
        flag=0;
    if(month<1 || month>12)
        flag=0;

    if(day<1)
        flag=0;
    else if(month==2)
    {
        if(isleap==1 && day>29)
            flag=0;
        else if(isleap==0 && day>28)
            flag=0;
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        if(day>30)
            flag=0;
    }
    else if(day>31)
        flag=0;

    if(flag==1)
        printf("Entered date %d/%d/%d is valid date\n",day,month,year);
    else
        printf("Entered date %d/%d/%d is not valid date\n",day,month,year);

}
