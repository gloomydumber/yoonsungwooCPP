#include "C:\Users\kang\Desktop\CPP lang\yoonsungwoocpp\Chapter3\Car.h"
#include <iostream>
using namespace std;

int main(void)
{
  Car run99;
  //cout<<"hi"<<endl;
  char temp[]="run99";
  char *s = temp; // error in atom... (파일분할 시)
  run99.InitMembers(s, 100);
  run99.Accel();
  run99.Accel();
  run99.Accel();
  run99.ShowCarState();
  run99.Break();
  run99.ShowCarState();
  return 0;
}
