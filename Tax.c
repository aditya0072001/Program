#include<stdio.h>

void main()
{
float gs,tax;

printf("\n Enter Gross salary",gs);
scanf("%f,&gs");

if(gs>=30000)
{
  tax=gs*0.2;
  printf("\n Your income tax applied is %f",tax);
  }

else if(gs>=20000 && gs<30000)
{
  tax=gs*0.15;
  printf("\n Your income tax applied is %f",tax);
}

if(gs>=10000 && gs<20000)
{
  tax=gs*0.10;
  printf("\n Your income tax applied is %f",tax);
}

}
