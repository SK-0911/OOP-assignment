#include <iostream>
using namespace std;

int max(int arr[], int n)
{
  int i, MAX = arr[0];
  for(i=0;i<n;i++)
  {
    if(arr[i]>MAX)
    {
      MAX = arr[i];
    }
  }
  return MAX;
  
}

int min(int arr[], int n)
{
  int i, MIN = arr[0];
  for(i=0;i<n;i++)
  {
    if(arr[i]<MIN)
    {
      MIN = arr[i];
    }
  }
  return MIN;
  
}

int main() {
  
  int marks[100];
  int stu,i;
  cout << "Total No. of students: ";
  cin>>stu;
  for(i=0;i<stu;i++)
  {
    cout<<"Student "<<i+1<<": ";
    cin>>marks[i];
  }
  cout<<"\n\nMaximum Marks: "<<max(marks, stu);
  cout<<"\nMinimum Marks: "<<min(marks, stu);

}