#include <iostream>
using namespace std;

class SoSimple
{
public:
  static int simObjCnt;
public: // not necessary, but for categorize func/variable
  SoSimple()
  {
    simObjCnt++;
  }
};
int SoSimple::simObjCnt=0;

int main(void)
{
  cout<<SoSimple::simObjCnt<<"'s SoSimple Object"<<endl;
  SoSimple sim1;
  SoSimple sim2;

  cout<<SoSimple::simObjCnt<<"'s SoSimple Object"<<endl;
  cout<<sim1.simObjCnt<<"'s SoSimple Object"<<endl;
  cout<<sim2.simObjCnt<<"'s SoSimple Object"<<endl;
  return 0;
}
