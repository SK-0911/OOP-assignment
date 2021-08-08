#include <iostream>

using namespace std;

void avg(int stu)
{
  int *marks = new int[stu];
  int sum = 0;
  for(int i = 0;i<stu;i++)
  {
    cout<<"Student "<<i+1<<": ";
    cin>>*(marks+i);
    
  }
  for( int j = 0; j < stu; j++ )
  {
    sum += *(marks+j);
  }
  int average = sum/stu;
  cout<<"Average is: "<<average;
  delete[] marks;
  
}

int main() 
{
  int total;
  cout << "Enter the number of Students: ";
  cin>>total;

  avg(total);

}