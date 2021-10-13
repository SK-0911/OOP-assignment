#include <iostream>
using namespace std;
class account
{
  public:
  string name;
  long long int number;
  string type;
  long int bal = 0;
  int dep_amt;
  int withdraw_amt;
  void accept()
  {
    cout<<"Customer Name: ";
    cin>>name;
    cout<<"Account Number: ";
    cin>>number;
    cout<<"Type of Account: ";
    cin>>type;
    
  }
  void display()
  {
    cout<<"Current Balance: "<<bal;
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

class cur_acct: public account
{
  public:
  bool chq_bk = false;
  void penalty()
  {
    if(bal<1000)
    {
      cout<<"Your current balance is less than 1000, 100 is deducted as a penalty";
      bal = bal-100;
    }
    else
    {
      cout<<"Your current balance is less than 1000, no penalty will be imposed";
    }
    
  }
  /*void display()
  {
    cout<<"Current Balance: "<<bal;
  }*/
};

class sav_acct: public account
{
  public:
  bool chq_bk = true;
  void compound_interest()
  {
    bal = bal*(1.21);
  }
  /*void display()
  {
    cout<<"Current Balance: "<<bal;
  }*/
};

int main() {
  account a;
  sav_acct s;
  cur_acct c;
  a.accept();
  int op;
  if(a.type == "Savings")
  {
    do{
    cout<<"\n(1)Deposit\n(2)Display the balance\n(3) Compute and deposit interest\n(4)Withdraw\n(5)EXIT\n-->";
    cin>>op;
    switch(op)
    {
    case 1:
    s.deposit();
    break;
    case 2:
    s.display();
    break;
    case 3:
    s.compound_interest();
    break;
    case 4:
    s.withdrawal();
    break;
    }
    }while(op!=5);
  }
  if(a.type == "Current")
  {
    do{
    cout<<"\n(1)Deposit\n(2)Display the balance\n(3)Withdraw\n(4)Check for minimun balance\n(5)EXIT\n-->";
    cin>>op;
    switch(op)
    {
    case 1:
    c.deposit();
    break;
    case 2:
    c.display();
    break;
    case 3:
    c.withdrawal();
    break;
    case 4:
    c.penalty();
    break;
    }
    }while(op!=5);
  }
  
}
