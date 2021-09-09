#include <iostream>
using namespace std;

class ica
{
  public:
  int maths_ica;
  int opp_ica;
  int se_ica;
  int ds_ica;
  void ica_marks()
  {
    cout<<"**ICA marks**"<<endl;
    cout<<"Maths(Out of 50): ";
    cin>>maths_ica;
    cout<<"OPP(Out of 50): ";
    cin>>opp_ica;
    cout<<"SE(Out of 50): ";
    cin>>se_ica;
    cout<<"DS(Out of 50): ";
    cin>>ds_ica;
  }
};

class tee: public ica
{
  public:
  int maths_tee;
  int opp_tee;
  int se_tee;
  int ds_tee;
  void tee_marks()
  {
    cout<<"\n**TEE marks**"<<endl;
    cout<<"Maths(Out of 50): ";
    cin>>maths_tee;
    cout<<"OPP(Out of 50): ";
    cin>>opp_tee;
    cout<<"SE(Out of 50): ";
    cin>>se_tee;
    cout<<"DS(Out of 50): ";
    cin>>ds_tee;
  }
};

void result()
{
  tee marks;
  marks.ica_marks();
  marks.tee_marks();
  int maths = marks.maths_ica + marks.maths_tee;
  int opp = marks.opp_ica + marks.opp_tee;
  int se = marks.se_ica + marks.se_tee;
  int ds = marks.ds_ica + marks.ds_tee;
  cout<<"\n\n****RESULT****"<<endl;
  cout<<"Maths(Out of 100): "<<maths<<endl;
  cout<<"OPP(Out of 100): "<<opp<<endl;
  cout<<"SE(Out of 100): "<<se<<endl;
  cout<<"DS(Out of 100): "<<ds<<endl;
}
int main() {
  result();
}