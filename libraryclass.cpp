#include <iostream>
using namespace std;

class library
{
private:
  char bookname;
  int bookquantity;
  float cost;
public:
  void bookname();
  void bookquantity;
  void cost;
};

int main()
{
library lib1,lib2 ;

lib1.bookname(1066);
lib2.bookquantity(1777);

lib1.bookname();
lib2.bookquantity();


}
