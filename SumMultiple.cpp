#include <iostream>
using namespace std;
int main()
{
  int n1,n2,s,counter=0,total=3;
  while(counter<total)
  {
    cout<<"Iteration of"<<counter+1<<total;
    cout<<"Enter two numbers:\t";
    cin>>n1>>n2;
    s=n1+n2;
    cout<<"\nSum=\n"<<s;
    counter=counter+1;  //increment
  }

//  getch();

}
