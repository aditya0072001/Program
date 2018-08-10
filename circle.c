#include<stdio.h>

void main()
{
   float radius, area,perimeter;

   printf("\nEnter the radius of Circle : ");
   scanf("%f", &radius);

   area = 3.14 * radius * radius;
   perimeter=2*3.14*radius;
   printf("\nArea of Circle : %f", area);
   printf("\nPerimeter of circle: %f",perimeter);
   getch();



}
