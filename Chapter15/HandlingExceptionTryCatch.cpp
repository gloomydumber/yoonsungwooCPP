#include <iostream>
using namespace std;

int main(void)
{
  int num1, num2;
  cout<<"type two numbers: ";
  cin>>num1>>num2;

  try
  {
    if(num2==0)
      throw num2;
    cout<<"divide: "<<num1/num2<<endl;
    cout<<"remainder: "<<num1%num2<<endl;
  }
  catch(int expn)
  {
    cout<<expn<<" can't be divided."<<endl;
    cout<<"restart program."<<endl;
  }
  cout<<"end of main"<<endl;
  return 0;
}
