#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
  int bullet;
public:
  Gun(int bnum) : bullet(bnum)
  {}
    void Shot()
    {
      cout<<"BAANG!"<<endl;
      bullet--;
    }
};

class Police : public Gun
{
private:
  int handcuffs; // number of owned handcuffs
public:
  Police(int bnum, int bcuffs)
  :Gun(bnum), handcuffs(bcuffs)
  {}
  void PutHandcuff()
  {
    cout<<"SNAP!"<<endl;
    handcuffs--;
  }
};

int main(void)
{
  Police pman(5, 3); // Bullet 5, Handcuffs 3
  pman.Shot();
  pman.PutHandcuff();
  return 0;
}
