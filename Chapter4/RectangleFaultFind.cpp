#include <iostream>
#include "C:\Users\kang\Desktop\CPP lang\yoonsungwoocpp\Chapter4\Point.h"
#include "C:\Users\kang\Desktop\CPP lang\yoonsungwoocpp\Chapter4\Rectangle.h"
using namespace std;

int main(void)
{
  Point pos1;
  if(!pos1.InitMembers(-2, 4))
    cout << "Initialize Fail"<<endl;
  if(!pos1.InitMembers(2, 4))
    cout << "Initialize Fail"<<endl;

  Point pos2;
  if(!pos2.InitMembers(5, 9))
    cout << "Initialize Fail" << endl;

  Rectangle rec;
  if(!rec.InitMembers(pos2, pos1))
    cout<<"rectangular init fail"<<endl;
  if(!rec.InitMembers(pos1, pos2))
    cout<<"rectangular init fail"<<endl;

  rec.ShowRecInfo();
  return 0;
}
