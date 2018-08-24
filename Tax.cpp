#include <iostream>
using namespace std;
int main()
{
	float gs,tax;

	cout<<"\n Enter Gross salary";
	cin>>gs;

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
	 cout<<"\n Your income tax applied is "<<tax;
}
