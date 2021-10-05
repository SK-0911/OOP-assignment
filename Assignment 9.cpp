#include <iostream>
using namespace std;

class bank_acc
{
  public:
  string name;
  string address;
  int age;
  long long int acc_no;
  int bal;
  int dep_amt;
  int withdraw_amt;
  bank_acc()
  {
    bal = 0;
  }
  void open_acc()
  {
    cout<<"Name of the customer: ";
    cin>>name;
    cout<<"Address(mention only the city): ";
    cin>>address;
    cout<<"Age: ";
    cin>>age;
    cout<<"Saving Account No.: ";
    cin>>acc_no;
    cout<<"Balance: ";
    cin>>bal;
  }
  void deposit()
  {
    cout<<"Enter the amount to be depositted: ";
    cin>>dep_amt;
    bal = bal+dep_amt;
  }
  void withdrawal()
  {
    cout<<"Enter the amount to be withdrawn: ";
    cin>>withdraw_amt;
    bal = bal - withdraw_amt;
  }
  
};
class life_ins: virtual public bank_acc
{
  public:
  long int policy_no;
  int sum_assured;
  int premium;
  int term;
  life_ins()
  {
    sum_assured = 0;
    term = 0;
    premium = 0;
  }
  void read_data()
  {
    cout<<"Policy No.: ";
    cin>>policy_no;
    cout<<"Assured amount of sum: ";
    cin>>sum_assured;
    cout<<"Term(No. of years): ";
    cin>>term;
  }
  void cal()
  {
    for(int i=0;i<term;i++)
    { 
      if(age<=25)
      {
        bal = bal - 3000*(sum_assured)/100000;
        premium = premium + 3000*(sum_assured)/100000;
      }
      else if(age>25 || age<=45)
      {
        bal = bal - 4000*(sum_assured)/100000;
        premium = premium + 4000*(sum_assured)/100000;
      }
      else if(age>45 || age<=60)
      {
        bal = bal - 5000*(sum_assured)/100000;
        premium = premium + 5000*(sum_assured)/100000;
      }
      else
      {
        cout<<"You are not eligible for the insurance";
      }
      //age = age + 1;
      //term = term - 1;
    }
  }
  void display()
  {
    cout<<endl<<"***Details***"<<endl;
    cout<<"Policy No.: "<<policy_no<<endl;
    cout<<"Sum assured: "<<sum_assured<<endl;
    cout<<"Term: "<<term<<endl;
    cout<<"Current Balance: "<<bal<<endl;
    cout<<"Premium: "<<premium<<endl;
  }
};
class car_ins: virtual public bank_acc
{
  public:
  int policy_no;
  int car;
  int premium;
  int duration;
  void input()
  {
    cout<<"Policy No.: ";
    cin>>policy_no;
    cout<<"How old is your car: ";
    cin>>car;
    cout<<"Duration of the policy: ";
    cin>>duration;
  }
  void cal_premium()
  {
    for(int i=0;i<duration;i++)
    { 
      if(car<2)
      {
        bal = bal - 40000;
        premium = premium + 40000;
      }
      else if(age>=2 || age<=4)
      {
        bal = bal - 24000;
        premium = premium + 24000;
      }
      else if(age>5 || age<=7)
      {
        bal = bal - 16000;
        premium = premium + 16000;
      }
    }
  }
  void show()
  {
    cout<<endl<<"***Details***"<<endl;
    cout<<"Policy No.: "<<policy_no<<endl;
    cout<<"Car's Age: "<<car<<endl;
    cout<<"Duration: "<<duration<<endl;
    cout<<"Current Balance: "<<bal<<endl;
    cout<<"Premium: "<<premium<<endl;
  }

};
class claim: public life_ins, public car_ins
{
  public:
  int repair_cost;
  void settlement_life()
  {
    if(term<=5)
    {
      cout<<"No settlement";
    }
    else if(term>5 || term<=12)
    {
      cout<<"Settlement Amount: "<<0.25*(sum_assured);
    }
    else if(term>12 || term<=20)
    {
      cout<<"Settlement Amount: "<<0.7*(sum_assured);
    }
    else
    {
      cout<<"Settlement Amount: "<<2*(sum_assured);
    }
  }
  void settlement_car()
  {
    cout<<endl<<"Amount spent on repairing the car: "<<endl;
    cin>>repair_cost;
    cout<<"Settlement Amount: "<<repair_cost;
  }
};

int main() 
{
  bank_acc b1;
  life_ins l1;
  claim c1;
  c1.open_acc();
  int op;
  cout<<"Which insurance are you looking for?\n1. Life Insurance\n2.Car Insurance\n\n-->";
  cin>>op;
  switch(op)
  {
    case 1:
    c1.read_data();
    c1.cal();
    c1.display();
    c1.settlement_life();
    case 2:
    c1.input();
    c1.cal_premium();
    c1.show();
    c1.settlement_car();
  }
  
  
}