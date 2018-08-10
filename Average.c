#include <stdio.h>

#define MIN 0
#define MAX 99

void main()
{
  int n,a,whilecounter=0,total=3,sumcounter=0;



while(whilecounter<total)
{
  printf("Enter a number(%d-%d) :",MIN,MAX);
  scanf("%d",&n);
  if (n >= MIN && n <= MAX)
  {
      printf("Good\n");
      sumcounter=sumcounter+n;
      whilecounter++;
      //whilecounter=whilecounter+1;
  }

  else
  {
      printf("Damn you!\n");
      break;

  }





  }
  a=(sumcounter)/total;

  printf("Average is %d",a);
}
