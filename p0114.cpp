#include <iostream>

using namespace std;

int main(void){
  int sale=0;
  double salrary;

  while(true){
    cout << "type saled moeny value as 10,000 index(-1 to end): ";
    cin >> sale;

    if(sale==-1){
    cout << "program exit" << endl;
    break;
    }

    salrary = 50 + (sale*0.12);
    cout << "salary for this month : " << salrary << endl;
  }

  return 0;
}
