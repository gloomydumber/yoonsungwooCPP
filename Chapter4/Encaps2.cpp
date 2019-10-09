#include <iostream>
using namespace std;

class SinivelCap // for snivel cure
{
public:
  void Take() const {cout<<"snivel coming"<<endl;}
};

class SneezeCap // for sneeze cure
{
public:
  void Take() const {cout<<"sneeze coming"<<endl;}
};

class SnuffleCap // for snuffle cure
{
public:
  void Take() const{cout<<"snuffle coming"<<endl;}
};

class CONTAC600
{
private:
  SinivelCap sin;
  SneezeCap sne;
  SnuffleCap snu;

public:
  void Take() const
  {
    sin.Take();
    sne.Take();
    snu.Take();
  }
};

class ColdPatient
{
public:
  void TakeCONTAC600(const CONTAC600 &cap) const {cap.Take();}
};

int main(void)
{
  CONTAC600 cap;
  ColdPatient sufferer;
  sufferer.TakeCONTAC600(cap);
  return 0;
}
