#include<iostream>

class smallobj
{
private:
  int somedata;
public:
  void setdata(int d)
  { somedata=d;}
  void showdata()
  { cout << "\nData is" << somedata;}
};

void main()
{
  smallobj s1,s2;
  s1.setdata(1066);
  s2.setdata(1777);

  s1.showdata();
  s2.showdata();
}
