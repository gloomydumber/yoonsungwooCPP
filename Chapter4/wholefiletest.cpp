#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:
  int x;
  int y;
public:
  bool InitMembers(int xpos, int ypos);
  int GetX() const;
  int GetY() const;
  bool SetX(int xpos);
  bool SetY(int ypos);
};
#endif
#include <iostreaM>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
  if(xpos<0 || ypos<0)
  {
    cout <<"range fault"<<endl;
    return false;
  }

  x=xpos;
  y=ypos;
  return true;
}

int Point::GetX() const // const function!
{
  return x;
}

int Point::GetY() const
{
  return y;
}

bool Point::SetX(int xpos)
{
  if(0>xpos || xpos>100)
  {
    cout<<"range fault"<<endl;
    return false;
  }
  x=xpos;
  return true;
}
bool Point::SetY(int ypos)
{
  if(0>ypos || ypos>100)
  {
    cout <<"range fault"<<endl;
    return false;
  }
  y=ypos;
  return true;
}
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "C:\Users\kang\Desktop\CPP lang\yoonsungwoocpp\Chapter4\Point.h"

class Rectangle{
private:
  Point upLeft;
  Point lowRight;

public:
  bool InitMembers(const Point &ul, const Point &lr);
  void ShowRecInfo() const;
};
#endif
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
