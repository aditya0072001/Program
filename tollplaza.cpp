#include<iostream>
using namespace std;

#define Toll=10.50
#define ESC=27

class tollplaza
{
private:
  int  totalcar;
  double  totalcash;

public: tollplaza()
  {
    totalcar=0;
    totalcash=0.0;

  }
void payingcar()
 {
    totalcash=totalcash+Toll;
    totalcar=totalcar+1;
  }

void nonpayingcar()
{
  totalcar++;
}
void printcardetail()
{
  cout<<"totalcash";
  cout<<"totalcar";
}

};

int main()
{
  tollplaza plaza1;
  char ch;
  cout<<"Press 0 for no pay car\nPress 1 for pay car\nPress ESC to exit program";

  do {
    cin>>ch;
    if(ch=='0')
    {
      plaza1.nonpayingcar();
    }
    else if(ch=='1')
    {
      plaza1.printcardetail();
    }
  } while(ch!=ESC);
  plaza1.printcardetail();

  return 0;
}
