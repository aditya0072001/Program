#define toll=10.50
#define ESC=27

class tollplaza
{
private:
  int  totalvehicle;
  int  totalcash;

public: tollplaza()
  void  totalvehicle(int 0);
  void  totalcash(double 0.0);

public: payingcar()
 {
    totalcash=totalcash+toll;
    totalcar=totalcar+1;
  }

public: nonpayingcar()
{
  totalcar++;
}
public: printcardetail()
{
  cout<<"totalcash";
  cout<<"totalcar";
}

}

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
  plaza.printcardetail();

  return 0;
}
