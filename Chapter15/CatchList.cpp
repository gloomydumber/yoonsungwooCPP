#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int StoI(char * str)
{
  int len=strlen(str);
  int num=0;

  if(len!=0 && str[0]=='0')
    throw 0;

  for(int i=0; i<len; i++)
  {
    if(str[i]<'0' || str[i]>'9')
      throw str[i];
    num += (int)(pow((double)10, (len-1)-i) * (str[i]+(7-'7')));
  }
  return num;

}

int main(void)
{
  char str1[100];
  char str2[200];

  while(1)
  {
    cout<<"type two numbers: ";
    cin>>str1>>str2;

    try
    {
      cout<<str1<<" + "<<str2<<" = "<<StoI(str1)+StoI(str2)<<endl;
      break;
    }
    catch(char ch)
    {
      cout<<"charactor "<< ch <<" is typed."<<endl;
      cout<<"retype."<<endl<<endl;
    }
    catch(int expn)
    {
      if(expn==0)
        cout<<"The number that 0x is can't be inserted."<<endl;
      else
        cout<<"abnormal inserted."<<endl;

      cout<<"retype."<<endl<<endl;
    }
  }
  cout<<"program exit."<<endl;
  return 0;
}
