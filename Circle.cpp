#include <iostream>
using namespace std;
int main()
{
   float radius, area,perimeter;

   cout<<"\nEnter the radius of Circle";
   cin>>radius;

   area = 3.14 * radius * radius;
   perimeter=2*3.14*radius;
   cout<<"\nArea of Circle is"<<area;
   cout<<"\nPerimeter of circle"<<perimeter;

   return 1;
}
