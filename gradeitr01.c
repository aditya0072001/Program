#include<stdio.h>

void main()
{
  int m;

  printf("Enter your marks",m);
  scanf("%d",&m);

  if(m>=80)
  {
    printf("Your grade is 'A' ");
  }

  else if(m<80 && m>=60)
  {
    printf("Your grade is 'B' ");
  }

  else if(m<60 && m>=40)
  {
    printf("Your grade is 'C' ");
  }

  if(m<40)
  {
    printf("Your grade is 'D' ");
  }

}
