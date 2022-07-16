#include <iostream>
using namespace std;

inline int squaring(int a){return a*a;}
inline double  squaring(double a){return a*a;}

void  print_squares (int initial_value, int result_value, int step_count)
{
    for (auto counter = initial_value; counter<=result_value; counter+=step_count)
    {
        cout<<counter<<" "<<squaring(counter)<<'\n';
    }
}

void  print_squares (double initial_value, double result_value, double step_count)
{
    for (auto counter = initial_value; counter<=result_value; counter+=step_count)
    {
        cout<<counter<<" "<<squaring(counter)<<'\n';
    }
}

void ordering (int &value1, int &value2)
{
    if (value2>value1)
    {
        int tmp = value2;
        value2 = value1;
        value1=tmp;
    }  
}

int main() {
 
 
  cout<<"Table of integers"<<'\n';
  int a = 2, b = 10, c = 2; 
  print_squares(a,b,c);

  cout<<"Table of doubles"<<'\n';
  double d = 2.5, e = 10.9, f =2.3;
  print_squares(d,e,f);

  int valuea = 10, valueb = 8;
  cout<<"Before ordering"<<'\n';
  cout<<"valuea = "<<valuea<<'\n';
  cout<<"valueb = "<<valueb<<'\n';
  ordering(valuea, valueb);
  cout<<"After ordering"<<'\n';
  cout<<"valuea = "<<valuea<<'\n';
  cout<<"valueb = "<<valueb<<'\n';
}
