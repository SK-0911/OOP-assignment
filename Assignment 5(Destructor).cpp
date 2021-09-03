#include <iostream>
using namespace std;

class employee
{
  public:
    int* id;
    int* salary;
    int da;
    int hra;
    int ta;
    int gs;
    string* name;
    string* dept;

    employee()//Dynamic Constructor
    {
    name = new string;
    dept = new string;
    id = new int;
    salary = new int;
    cout<<"****WELCOME****\n\n";
    cout<<"Employee's Name: ";
    cin>>*name;
    cout<<"Employee's Department: ";
    cin>>*dept;
    cout<<"Employee's ID: ";
    cin>>*id;
    cout<<"Employee's Salary: ";
    cin>>*salary;
    da = 0.5 *(*salary);
    hra = 0.3*(*salary);
    ta = 0.1*(*salary);
    gs = da + hra + ta;
    }
  void display()
  {
    cout<<"Name: "<<*name<<endl;
    cout<<"Department: "<<*dept<<endl;
    cout<<"ID: "<<*id<<endl;
    cout<<"Basic salary: "<<*salary<<endl;
    cout<<"Dearness Allowance(DA): "<<da<<endl;
    cout<<"House Rental Allowance(HRA): "<<hra<<endl;
    cout<<"Travelling Allowance: "<<ta<<endl;
    cout<<"Gross Salary: "<<gs<<endl;
  }
  ~employee()//Destructor
  {
    delete name;
    delete dept;
    delete id;
    delete salary;
  }
};
int main() {
  employee e;
  e.display();
}