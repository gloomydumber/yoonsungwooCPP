#include <iostream>
#include "C:\Users\kang\Desktop\CPP lang\yoonsungwoocpp\Chapter4\Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr)
{
  if(ul.GetX()>lr.GetX()||ul.GetY()>lr.GetY())
  {
    cout << " wrong position " << endl;
    return false;
  }
  upLeft=ul;
  lowRight=lr;
  return true;
}

void Rectangle::ShowRecInfo() const
{
  cout << "upper-left : "<<'['<<upLeft.GetX()<<", ";
  cout << upLeft.GetY()<<']'<<endl;
  cout << "bottom-right : "<<'['<<lowRight.GetX()<<", ";
  cout << lowRight.GetY()<<']'<<endl<<endl;
}
