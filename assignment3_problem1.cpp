#include <iostream>
using namespace std;

int y2f(int y)
{
  return 3*y;
}

int f2i(int f)
{
  return 12*f;
}

int y2i(int y)
{
  return 36*y;
}

int main() 
{
  int *op = new int;
  do
  {
  cout<<"\n\nConversion From:\n1.Yard to Feet\n2.Feet to Inches\n3.Yard to Inches\n4.EXIT\n\n-->";
  cin>>*op;
  
  switch(*op)
  {
    case 1:
    {
      int *yard = new int;
      cout << "Yard: ";
      cin>>*yard;
      cout<<*yard<<" yard is "<<y2f(*yard)<<" foot";
      delete yard;
      break;
    }
    case 2:
    {
      int *feet = new int;
      cout<<"Feet: ";
      cin>>*feet;
      cout<<*feet<<" foot is "<<f2i(*feet)<<" inches";
      break;
    }
    case 3:
    {
      int *yard = new int;
      cout << "Yard: ";
      cin>>*yard;
      cout<<*yard<<" yard is "<<y2i(*yard)<<" foot";
      delete yard;
      break;
    }
    case 4:
    {
      cout<<"Program Terminated";
      break;
    }
  }
  }while(*op != 4);
  delete op;
  
}