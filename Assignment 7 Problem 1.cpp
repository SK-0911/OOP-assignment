#include <iostream>
using namespace std;
class External1;  
class Internal1    
{
  private:
  int maths_ica;
  int opp_ica;
  int se_ica;
  int ds_ica;
  int total_ica;
  public:
  Internal1()
  {
    maths_ica = 0;
    opp_ica = 0;
    se_ica = 0;
    ds_ica = 0;
    total_ica = 0;
  }
  void input_ica()
  {
    cout<<"Internal Marks:-\n";
    cout<<"Enter ICA marks of Math (out of 50):\n";
    cin >>maths_ica;
    cout<<"Enter ICA marks of OPP (out of 50):\n";
    cin>>opp_ica;
    cout<<"Enter ICA marks of SE (out of 50):\n";
    cin>>se_ica;
    cout<<"Enter ICA marks of DS (out of 50):\n";
    cin>>ds_ica;
  }
  friend void operator+(Internal1,External1) ;    
  };
  
class External1 
{
  private:
  int maths_tee;
  int opp_tee;
  int se_tee;
  int ds_tee;
  int total_tee;
  public:
  External1()
  {
    maths_tee = 0;
    opp_tee = 0;
    se_tee = 0;
    ds_tee = 0;
    total_tee = 0;
  }
  void input_tee()
  {
    cout<<"\n***External Marks***\n";
    cout<<"Enter TEE marks of Math (out of 50):\n";
    cin>>maths_tee;
    cout<<"Enter TEE marks of OPP (out of 50):\n";
    cin>>opp_tee;
    cout<<"Enter TEE marks of SE (out of 50):\n";
    cin>>se_tee;
    cout<<"Enter TEE marks of DS (out of 50):\n";
    cin>>ds_tee;
  }
  friend void operator+(Internal1,External1);    
};
  
void operator+(Internal1 ob1, External1 ob2)          
{
    float total_maths,total_opp,total_se,total_ds; 
    float per;
    ob1.total_ica = ob1.maths_ica + ob1.opp_ica + ob1.se_ica + ob1.ds_ica;      //total internal marks
    ob2.total_tee = ob2.maths_tee + ob2.opp_tee + ob2.se_tee + ob2.ds_tee;     // total external marks
    total_maths = ob1.maths_ica + ob2.maths_tee;               
    total_opp = ob1.opp_ica + ob2.opp_tee;
    total_se = ob1.se_ica + ob2.se_tee;
    total_ds = ob1.ds_ica + ob2.ds_tee;
    cout<<"\nTotal Marks of Math:\n"<<total_maths<<" out of 100\n";
    if (total_maths < 50)
    {
      cout<<"Failed in Maths\n";
    }
    else
    {
      cout<<"Passed in Maths\n";
    }
    cout<<"\nTotal Marks of OPP:\n"<<total_opp<<" out of 100\n";
    if (total_opp < 50)
    {
      cout<<"Failed in OPP\n";
    }
    else
    {
      cout<<"Passed in OPP\n";
    }
    cout<<"\nTotal Marks of SE:\n"<<total_se<<" out of 100\n";
    if (total_se < 50)
    {
      cout<<"Failed in SE\n";
    }
    else
    {
      cout<<"Passed in SE\n";
    }
    cout<<"\nTotal Marks of DS:\n"<<total_ds<<" out of 100\n";
    if (total_ds < 50)
    {
      cout<<"Failed in DS\n";
    }
    else
    {
      cout<<"Passed in DS\n";
    }
    
    cout<<"\nTotal Marks of student - "<<ob1.total_ica + ob2.total_tee<<" out of 400\n";
    per = ((total_maths+total_opp+total_se+total_ds)/400)*100;
    
    if ((total_maths+total_opp+total_se+total_ds) >= 200)
    {
      cout<<"Total Percentage of student - "<<per<<"%\n" ;
    }
    else 
    {
      cout<<"Student has failed in atleast one subject.\n";
    }
}

int main()
{
    Internal1 obj1;
    External1 obj2;
    obj1.input_ica();
    obj2.input_tee();
    operator+(obj1,obj2);          

}