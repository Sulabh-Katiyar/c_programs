#include<stdio.h>
main()
{
    float cel, frn;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f",&cel);
    frn = (cel* 9/5)+32;
    printf("\n%f Celsius is equal to %f Fahrenheit",cel,frn);
}

