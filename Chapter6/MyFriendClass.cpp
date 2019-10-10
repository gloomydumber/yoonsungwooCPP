#include <iostream>
#include <cstring>
using namespace std;

class Girl; // Girl is class name.

class Boy
{
private:
  int height;
  friend class Girl; // Girl class is friend class
public:
  Boy(int len) : height(len)
  {}
    void ShowYourFriendInfo(Girl &frn);
};

class Girl
{
private:
  char phNum[20];
public:
  Girl(char * num)
  {
    strcpy(phNum, num);
  }
  void ShowYourFriendInfo(Boy &frn);
  friend class Boy; // Boy class is friend class
};

void Boy::ShowYourFriendInfo(Girl &frn)
{
  cout<<"Her Phone Number: "<<frn.phNum<<endl;
}

void Girl::ShowYourFriendInfo(Boy &frn)
{
  cout<<"His height: "<<frn.height<<endl;
}

int main(void)
{
  Boy boy(170);
  Girl girl("010-1234-5678");
  boy.ShowYourFriendInfo(girl);
  girl.ShowYourFriendInfo(boy);
  return 0;
}
