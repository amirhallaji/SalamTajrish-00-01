#include <iostream>

using namespace std;

int main(){

      int x = 100;
      cout << ~x << endl;
      x = x << 1;
      cout << x << endl; 
      x = x >> 4;
      cout << x << endl;

      int a = 3, b = 4;
      cout << (a & b) << "  " << (a | b) << "  " << (a ^ b) << endl;


      return 0;
}