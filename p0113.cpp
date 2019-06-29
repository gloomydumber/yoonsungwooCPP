#include <iostream>

using namespace std;

int main(void){
  int dan;
  cout << "type dan : ";
  cin >> dan;

  for(int i = 1; i<10; i++){
    cout << dan << " X " << i << " = " << dan*i << endl;
  }

  return 0;
}
