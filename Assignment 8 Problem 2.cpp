#include <iostream>
using namespace std;

class staff
{
  protected:
  int code;
  string name;
  public:
  void getstaff()
  {
    cout<<"\n\nEnter code :-";
    cin>>code;
    cout<<"Enter name :-";
    cin>>name;
  }
  void dispstaff()
  {
    cout<<"\nNAME       :-"<<name;
    cout<<"\nCODE       :-"<<code;
  }
};
class teacher: public staff
{
   
  public:
  string sub;
  string pub;
  void input()
  {
    getstaff();
    cout<<"Enter Subject :-";
    cin>>sub;
    cout<<"Enter Publication :-";
    cin>>pub;
  }
  void display()
  {
    dispstaff();
    cout<<"\nSUBJECT    :-"<<sub;
    cout<<"\nPUBLICATION:-"<<pub;
  }
};
class typist: public staff
{
  public:
  float speed;
  void gettypist()
  {
    getstaff();
    cout<<"Enter speed (wpm):-";
    cin>>speed;
  }
  void disptypist()
  {
    dispstaff();
    cout<<"\nSPEED      :-"<<speed;
  }
};
class regular: public typist
{

};
class casual: public typist
{
  float dailywages;
  public:
  void input()
  {
    gettypist();
    cout<<"Enter Daily Wages :-";
    cin>>dailywages;
  }
  void display()
  {
    disptypist();
    cout<<"\nDAILY WAGES:-"<<dailywages;
  }
};
class officer: public staff
{
  public:
  int grade;
  void input()
  {
    getstaff();
    cout<<"Enter Grade :-";
    cin>>grade;
  }
  void display()
  {
    dispstaff();
    cout<<"\nGRADE      :-"<<grade;
  }
};


int main() 
{
  int choice;
  teacher t;
  casual c;
  officer o;
  cout<<"\n=====EDUCATION INSTITUTION DATABASE=====\n\n\n";
  cout<<"Choose Category of Information\n";
  cout<<"1)   Teachers\n";
  cout<<"2)   Officer\n";
  cout<<"3)   Typist\n";
  cout<<"4)   Exit\n";
  cout<<"Enter your choice:-";
  cin>>choice;
  switch(choice)
  {
    case 1:
    cout<<"Enter Information about the teacher\n\n";
    t.input();
    t.display();
    break;
    case 2:
    cout<<"Enter Information about the Oficer\n\n";
    o.input();
    o.display();
    break;
    case 3:
    cout<<"Enter Information about the Typist\n\n";
    c.input();
    c.display();
    break;
  }
}
