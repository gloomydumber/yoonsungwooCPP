#include <iostream>

namespace BestComImpl
{
  void SimpleFunc(void)
  {
    std::cout<<"BestCom defined this function."<<std::endl;
  }
}

namespace ProgComImpl
{
  void SimpleFunc(void)
  {
    std::cout<<"ProgCom defined this function."<<std::endl;
  }
}

int main(void)
{
  BestComImpl::SimpleFunc();
  ProgComImpl::SimpleFunc();
  return 0;
}
