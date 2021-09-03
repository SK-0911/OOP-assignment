#include <iostream>
using namespace std;
class employee
{
  public:
  int id;
  int salary;
  int da;
  int hra;
  int ta;
  int gs;
  string name;
  string dept;
  employee()
  {
    cout<<"****WELCOME****\n\n";
    cout<<"Employee's Name: ";
    cin>>name;
    cout<<"Employee's Department: ";
    cin>>dept;
    cout<<"Employee's ID: ";
    cin>>id;
    cout<<"Employee's Salary: ";
    cin>>salary;
  }
  employee(const employee &e1)//copy constructor
  {
    da = 0.5 *e1.salary;
    hra = 0.3*e1.salary;
    ta = 0.1*e1.salary;
    gs = da + hra + ta;
    cout<<"Dearness Allowance(DA): "<<da<<endl;
    cout<<"House Rental Allowance(HRA): "<<hra<<endl;
    cout<<"Travelling Allowance: "<<ta<<endl;
    cout<<"Gross Salary: "<<gs<<endl;
  }
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Department: "<<dept<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Basic salary: "<<salary<<endl;
  }
};

int main() {
  employee e;
  e.display();
  employee e1 = e;
  
}