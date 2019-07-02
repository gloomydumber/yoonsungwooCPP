#include <iostream>

namespace BestComImpl
{
  void SimpleFunc(void);
}

namespace BestComImpl
{
  void PrettyFunc(void);
}

namespace ProgComImpl
{
  void SimpleFunc(void);
}

int main(void)
{
  BestComImpl::SimpleFunc();
  return 0;
}

void BestComImpl::SimpleFunc(void)
{
  std::cout<<"BestCom defined this function."<<std::endl;
  PrettyFunc();
  ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void)
{
  std::cout<<"So Pretty!!"<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
  std::cout<<"ProgCom defined this function."<<std::endl;
}
