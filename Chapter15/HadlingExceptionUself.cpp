#include <iostream>
using namespace std;

int main(void)
{
  int num1, num2;
  cout<<"type two number: ";
  cin>>num1>>num2;

  if(num2==0)
  {
    cout<<"can't divide by 0."<<endl;
    cout<<"restart program."<<endl;
  }
  else
  {
    cout<<"divide: "<<num1/num2<<endl;
    cout<<"remainder: "<<num1%num2<<endl;
  }
  return 0;
}
