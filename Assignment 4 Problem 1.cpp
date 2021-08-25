#include <iostream>
using namespace std;
class Consumer
{

  public:
    string name;
    long int number;
    string type;
    long int cmr;
    long int lmr;
    string bm;

    void readData()
    {
      cout<<"Name: ";
      cin>>name;
      cout<<"Consumer Number: ";
      cin>>number;
      cout<<"Type(Commercial or Non-commercial): ";
      cin>>type;
      cout<<"Current Meter Reading: ";
      cin>>cmr;
      cout<<"Last Meter Reading: ";
      cin>>lmr;
      cout<<"Bill Month: ";
      cin>>bm;

    }
    void calculateBill()
    {
      if(type == "Commercial")
      {
        if(cmr-lmr<200)
        {
          cout<<"Amount to be paid: "<<5*(cmr-lmr);
        }
        else
        {
          cout<<"Amount to be paid: "<<1000 + 10*(cmr-lmr-200);
        }
      }

      if(type == "Non-commercial")
      {
        if(cmr-lmr<100)
        {
          cout<<"Amount to be paid: "<<3*(cmr-lmr);
        }
        else
        {
          cout<<"Amount to be paid: "<<300 + 5*(cmr-lmr-100);
        }
      }
    }
    void printBill()
    {
      cout<<"--------\n****BILL****\n";
      cout<<"Consumer's Name: "<<name<<endl;
      cout<<"Consumer's Number: "<<number<<endl;
      cout<<"Consumer's Type: "<<type<<endl;
      cout<<"Current Meter Reading: "<<cmr<<endl;
      cout<<"Last Meter Reading: "<<lmr<<endl;
      cout<<"Bill Month: "<<bm;
      cout<<"\n---------------\n";
      calculateBill();

    }
  

};

int main() 
{
  Consumer c1;
  c1.readData();
  //c1.calculateBill();
  c1.printBill();
  
}