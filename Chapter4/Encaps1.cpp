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

class ColdPatient
{
public:
  void TakeSnivelCap(const SinivelCap &cap) const {cap.Take();}
  void TakeSneezeCap(const SneezeCap &cap) const {cap.Take();}
  void TakeSnuffleCap(const SnuffleCap &cap) const{cap.Take();}
};

int main(void)
{
  SinivelCap scap;
  SneezeCap zcap;
  SnuffleCap ncap;

  ColdPatient sufferer;
  sufferer.TakeSnivelCap(scap);
  sufferer.TakeSneezeCap(zcap);
  sufferer.TakeSnuffleCap(ncap);
  return 0;
}
