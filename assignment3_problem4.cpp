#include <iostream>
using namespace std;

void input(string n[3], int r[3], int div = 1, string prog = "B.Tech")
{
  for(int i=0;i<3;i++)
  {
    cout<<"Student "<<i+1<<":\n";
    cout<<"Name: "<<n[i]<<endl;
    cout<<"Roll No.: "<<r[i]<<endl;
    cout<<"Division: "<<div<<endl;
    cout<<"Program: "<<prog<<endl;
    cout<<"\n\n";
  }
}

int main() 
{
  string name[3];
  int roll[3];
  for(int i=0;i<3;i++)
  {
    cout<<"Enter details for student "<<i+1<<":\n";
    cout<<"Enter Your Name: ";
    cin>>name[i];

    cout<<"Enter Your Roll No.: ";
    cin>>roll[i];
    cout<<"\n----------\n";
  }

  input(name, roll);
}