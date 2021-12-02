#include <iostream>

void xChanger(int &z){
      z = 4;
}
using namespace std;
int main(){
      int x = 5;
      cout << x << endl;
      xChanger(x);
      cout << x << endl;
      return 0;
}