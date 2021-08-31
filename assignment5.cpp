#include <iostream>
using namespace std;

class employee
{
    public:
    int* id;
    int salary;
    int da;
    int hra;
    int ta;
    int gs;
    string name;
    string dept;
    employee()//constructor overloading
    {
      cout<<"Employee's Name: ";
      cin>>name;
      cout<<"Employee's Department: ";
      cin>>dept;
      /*da = 0.5*salary;
      hra = 0.3*salary;
      ta = 0.1*salary;
      gs = da + hra + ta;*/
    }
    employee(string para) //dynamic constructor
    {
      id = new int;
      cout<<para<<endl;
      cout<<"Employee's ID: ";
      cin>>*id;
      cout<<"Employee's Salary: ";
      cin>>salary;
      
      //cout<<*id;
    }
    
    employee(const employee &e1) //copy constructor
    {
      /*cout<<"Employee's Name: ";
      cin>>e1.name;
      cout<<"Employee's Department: ";
      cin>>e1.dept;*/
      da = 0.5*e1.salary;
      //cout<<e1.salary;
      hra = 0.3*e1.salary;
      ta = 0.1*e1.salary;
      gs = da + hra + ta;
      cout<<"Dearness Allowance(DA): "<<da<<endl;
      cout<<"House Rental Allowance(HRA): "<<hra<<endl;
      cout<<"Travelling Allowance: "<<ta<<endl;
      cout<<"Gross Salary: "<<gs<<endl;
    }
    ~employee()//Destructor
    {
      delete id;
    }
    void display()
    {
      cout<<"ID: "<<*id<<endl;
      cout<<"Basic Salary: "<<salary<<endl;
    }
};

int main() {
  employee e3;
  employee e("Your ID and Salary");
  cout<<"Name: "<<e3.name<<endl;
  cout<<"Department: "<<e3.dept<<endl;
  e.display();
  employee e2 = e;
}