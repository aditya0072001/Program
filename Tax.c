#include<stdio.h>

void main()
{
float gs,tax;

printf("\n Enter Gross salary",gs);
scanf("%f,&gs");

  //printf for income tax should be at the very end of if else loop.
if(gs>=30000)
{
  tax=gs*0.2;
 
  }

else if(gs>=20000 && gs<30000)
{
  tax=gs*0.15;
 
}

if(gs>=10000 && gs<20000)
{
  tax=gs*0.10;
 
}
 printf("\n Your income tax applied is %f",tax);
}
