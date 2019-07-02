#include <iostream>

using namespace std;

int main(void)
{
  char name[100];
  char phonenum[100];

  cout << "Type your Name : ";
  cin >> name;
  cout << "Type your Phone Number : ";
  cin >> phonenum;
  cout << "Name : " << name << endl;
  cout << "Phone Number : " << phonenum << endl;

  return 0;
}
