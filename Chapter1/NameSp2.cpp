#include <iostream>

namespace BestComImpl
{
  void SimpleFunc(void);
}

namespace ProgComImpl
{
  void SimpleFunc(void);
}

int main(void)
{
  BestComImpl::SimpleFunc();
  ProgComImpl::SimpleFunc();
  return 0;
}

void BestComImpl::SimpleFunc(void)
{
  std::cout<<"BestCom defined this function."<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
  std::cout<<"ProgCom defined this function."<<std::endl;
}
