#include <iostream>

using namespace std;

int main(){

      int a, b;
      cin >> a >> b;
      if(a < b){
            int temp = a;
            a = b;
            b = temp;
      }

      while(b != 0){
            int copyB = b;
            b = a % b;
            a = copyB;
      }
      cout << a << endl;

      return 0;
}