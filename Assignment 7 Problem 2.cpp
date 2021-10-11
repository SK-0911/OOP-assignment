#include<iostream>
using namespace std;

class Doctor
{
  public:
  string name, area;
  void input()
  {
    cout<<"Name of the Doctor: ";
    cin>>name;
    cout<<"Area : ";
    cin>>area;
  }
  void display()
  {
    cout<<"Name: "<<name<<", Area: "<<area<<endl;
  }
  friend bool operator < (Doctor d1, Doctor d2);
};

bool operator < (Doctor d1, Doctor d2)
{
  if (d1 < d2)
  {
  return true;
  }
  else
  {
  return false;
  }
      
}
        
int main()
{
  int n;
  Doctor d[10];
    
  cout<<"No. of doctors: ";
  cin>>n;
  cout<< "\n********Enter Doctor Data********" << endl;
  for (int i=0; i<n; i++)
  {
    d[i].input();
  } 
  
for (int i=0; i<n; i++)
{
  for (int j=i+1; j<n; j++)
  {
    if (operator <(d[i].area, d[j].area))
    {
      swap(d[j],d[i]);
    }
  }
} //Bubble sort
  
cout<<"\n********Area wise sorted data********\n\n"<< endl;

for (int i=0; i<n; i++)
{
  cout<<i+1<<")";
  d[i].display();
} 
}

