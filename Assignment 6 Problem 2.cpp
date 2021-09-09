#include <iostream>
using namespace std;

class employee
{
  private:
  string name;
  string dept;
  int id;
  int salary;
  
  public:
  employee()
  {
    cout<<"Employee's Name: ";
    cin>>name;
    cout<<"Employee's Department: ";
    cin>>dept;
    cout<<"Employee's ID: ";
    cin>>id;
    cout<<"Employee's Monthly Salary: ";
    cin>>salary;
  }
  friend class sales;
  friend void display(employee e);
};

void display(employee e)
{
  cout<<"\n\nName: "<<e.name<<endl;
  cout<<"Department: "<<e.dept<<endl;
  cout<<"ID: "<<e.id<<endl;
  cout<<"Salary: "<<e.salary<<endl;
}

class sales
{
  public:
  int sales;
  //int incentives;
  void incentives(employee e)
  {
    cout<<"\n\nSales in month: ";
    cin>>sales;
    if(sales>=50 && sales<100)
    {
      cout<<"Your Incentives = "<<0.1*(e.salary);
    }
    else if(sales>=100 && sales<150)
    {
      cout<<"Your Incentives = "<<0.2*(e.salary);
    }
    else if(sales>=150)
    {
      cout<<"Your Incentives = "<<0.3*(e.salary);
    }
  }
  void indicator()
  {
    if(sales<50)
    {
      cout<<"\nYour sales performance in this month is Poor";
    }
    else if(sales>=50 && sales<=100)
    {
      cout<<"\nYour sales performance in this month is Satisfactory";
    }
    else if(sales>100 && sales<=150)
    {
      cout<<"\nYour sales performance in this month is Good";
    }
    else if(sales>150)
    {
      cout<<"\nYour sales performance in this month is Excellent";
    }
  }
  
};

int main() {
  employee obj1;
  sales obj2;
  display(obj1);
  obj2.incentives(obj1);
  obj2.indicator();

}