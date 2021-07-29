#include <iostream>
using namespace std;

float add(float num1,float num2)
{
  return num1+num2;
}

short add(short num1, short num2)
{
  
  return num1+num2;
}

int add(int num1,int num2)
{
  
  return num1+num2;
}

double add(double num1, double num2)
{
  return num1+num2;
}

long double add(long double num1, long double num2)
{
  return num1+num2;
}

long int add(long int num1, long int num2)
{
  return num1+num2;
}

char add(char num1, char num2)
{
  return num1+num2;
}

int main() 
{
  int op;
  do
  { 
    std::cout<<"\n-------------------";
    std::cout<<"\n\nAdd two:\n1.Short\n2.Int\n3.Float\n4.Double\n5.Long Double\n6.Long Int\n7.Char\n8.EXIT\n\n-->";
    std::cin>>op;
    switch(op)
    {
      case 1:
      {
        short num1;
        short num2;
        std::cout<<"Short 1: ";
        std::cin>>num1;
        std::cout<<"Short 2: ";
        std::cin>>num2;
        short short_res = add(num1, num2);
        std::cout<<"Result: "<<short_res;
        break;
      }
      
      case 2:
      {
        int num1;
        int num2;
        std::cout<<"Int 1: ";
        std::cin>>num1;
        std::cout<<"Int 2: ";
        std::cin>>num2;
        int int_res = add(num1, num2);
        std::cout<<"Result: "<<int_res;
        break;
      }
      case 3:
      {
        float float_num1;
        float float_num2;
        std::cout<<"Float 1: ";
        std::cin>>float_num1;
        std::cout<<"Float 2: ";
        std::cin>>float_num2;
        float float_res = add(float_num1, float_num2);
        std::cout<<"Result: "<<float_res;
        break;
      }
      case 4:
      {
        double double_num1;
        double double_num2;
        std::cout<<"Double 1: ";
        std::cin>>double_num1;
        std::cout<<"Double 2: ";
        std::cin>>double_num2;
        double double_res = add(double_num1, double_num2);
        std::cout<<"Result: "<<double_res;
        break;
      }
      case 5:
      {
        long double ld_num1;
        long double ld_num2;
        std::cout<<"Long Double 1: ";
        std::cin>>ld_num1;
        std::cout<<"Long Double 2: ";
        std::cin>>ld_num2;
        long double long_double_res = add(ld_num1, ld_num2);
        std::cout<<"Result: "<<long_double_res;
        break;
      }
      case 6:
      {
        long int li_num1;
        long int li_num2;
        std::cout<<"Long Int 1: ";
        std::cin>>li_num1;
        std::cout<<"Long Int 2: ";
        std::cin>>li_num2;
        long int long_int_res = add(li_num1, li_num2);
        std::cout<<"Result: "<<long_int_res;
        break;
      }
      case 7:
      {
        char char_num1;
        char char_num2;
        std::cout<<"Char 1: ";
        std::cin>>char_num1;
        std::cout<<"Char 2: ";
        std::cin>>char_num2;
        char char_res = add(char_num1, char_num2);
        std::cout<<"Result: "<<char_res;
        break;
      }
      case 8:
      {
        std::cout<<"Program Terminated";
        break;
      }
    }
  }while(op!=8);
  
}