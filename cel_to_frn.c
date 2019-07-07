// Enter the temperatture in celsius and convert that into fahrenheit
#include<stdio.h>
main()
{
    float cel, frn;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f",&cel);
    frn = (cel* 9/5)+32;
    printf("\n%.2f Celsius is equal to %.2f Fahrenheit\n",cel,frn);
}

