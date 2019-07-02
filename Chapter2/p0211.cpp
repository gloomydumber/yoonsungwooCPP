#include <iostream>
using namespace std;

void addone(int &num);
void changePM(int &num);

int main(void)
{
  int num=10;
  cout << num << endl;
  addone(num);
  cout << num << endl;
  changePM(num);
  cout << num << endl;
  changePM(num);
  cout << num << endl;

  return 0;
}

void addone(int &num)
{
  num++;
}

void changePM(int &num)
{
  num=-num;
}
