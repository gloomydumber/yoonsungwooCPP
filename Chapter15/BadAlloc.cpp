#include <iostream>
#include <new>
using namespace std;

int main(void)
{
  int num=0;

  try
  {
      while(1)
      {
        num++;
        cout<<num<<"'s allocation trial."<<endl;
        new int[1000][1000];
      }
  }
  catch(bad_alloc &bad)
  {
    cout<<bad.what()<<endl;
    cout<<"no more allocation possible."<<endl;
  }
  return 0;
}
