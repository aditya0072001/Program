#include <iostream>
using namespace std;
#define MIN 0
#define MAX 99

int main()
{
  int n,a,whilecounter=0,total=3,sumcounter=0;

while(whilecounter<total)

  cout<<"Enter numbers(%d-%d) :",MIN,MAX;
  cin>>n;
  if (n >= MIN && n <= MAX)

      cout<<"Good\n";
      sumcounter=sumcounter+n;
      whilecounter++;
      //whilecounter=whilecounter+1;


  else
  {
      cout<<"Damn you!\n";
      break;

  a=(sumcounter)/total;
  }
  cout<<"Average is %d";
}


