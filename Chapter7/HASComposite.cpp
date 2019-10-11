#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
  int bullet; // number of bullets
public:
  Gun(int bnum) : bullet(bnum)
  {}
  void Shot()
  {
    cout<<"BBANG!"<<endl;
    bullet--;
  }
};

class Police
{
private:
  int handcuffs; // number of Handcuffs
  Gun *pistol; // number of Gun
public:
  Police(int bnum, int bcuff)
    : handcuffs(bcuff)
    {
      if(bnum>0)
        pistol=new Gun(bnum);
      else
        pistol=NULL;
    }
  void PutHandcuff()
  {
    cout<<"SNAP!"<<endl;
    handcuffs--;
  }
  void Shot()
  {
    if(pistol==NULL)
      cout<<"Hut BBANG!"<<endl;
    else
      pistol->Shot();
  }
  ~Police()
  {
    if(pistol!=NULL)
      delete pistol;
  }
};

int main(void)
{
  Police pman1(5, 3);
  pman1.Shot();
  pman1.PutHandcuff();

  Police pman2(0, 3); // not possess gun Police
  pman2.Shot();
  pman2.PutHandcuff();
  return 0;
}
