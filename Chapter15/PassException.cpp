#include <iostream>
using namespace std;

void Divide(int num1, int num2)
{
  if(num2==0)
    throw num2;
  cout<<"divide: "<<num1/num2<<endl;
  cout<<"remainder: "<<num1%num2<<endl;
}

int main(void)
{
  int num1, num2;
  cout<<"type two numbers: ";
  cin>>num1>>num2;

  try
  {
    Divide(num1,num2);
    cout<<"divide done."<<endl;
  }
  catch(int expn)
  {
    cout<<expn<<" can't be divided."<<endl;
    cout<<"restart program."<<endl;
  }
  return 0;
}
