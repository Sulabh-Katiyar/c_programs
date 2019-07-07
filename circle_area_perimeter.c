//Accept the radius of the circle and calculate the area and perimeter of the circle
#include<stdio.h>
#define PIE 3.14
main()
{
    float radius,area,perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area=PIE*radius*radius;
    perimeter=2*PIE*radius;
    printf("\nArea is %.2f and Perimeter is %.2f having %.2f radius circle\n",area,perimeter,radius);
}