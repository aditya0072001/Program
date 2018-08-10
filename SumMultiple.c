#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n2,s,counter=0,total=3;
  while(counter<total)
  {
    printf("Iteration %d of %d", counter+1,total);
    printf("Enter two numbers:\t");
    scanf("%d%d",&n1,&n2);
    s=n1+n2;
    printf("\nSum=%d\n",s);
    counter=counter+1;  //increment
  }

//  getch();

}
