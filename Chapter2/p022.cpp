#include <iostream>
using namespace std;

int main(void)
{
  const int num = 12;
  const int *ptr = &num;
  const int *(&refptr) = ptr;
  printf("%d\n",*ptr);
  printf("%d\n",*refptr);
}
