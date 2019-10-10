#include <iostream>
using namespace std;

class CountryArea
{
public:
  const static int RUSSIA =17047540;
  const static int CANADA =998467;
  const static int CHINA =957290;
  const static int SOUTH_KOREA =9922;
};

int main(void)
{
  cout<<"RUSSIA SIZE: "<<CountryArea::RUSSIA<<"km^2"<<endl;
  cout<<"CANADA SIZE: "<<CountryArea::CANADA<<"km^2"<<endl;
  cout<<"CHINA SIZE: "<<CountryArea::CHINA<<"km^2"<<endl;
  cout<<"KOREA SIZE: "<<CountryArea::SOUTH_KOREA<<"km^2"<<endl;
  return 0;
}
