#include <iostream>

using namespace std;

int main(){
      double a[4] = {1, 6, 0, -5};
      for(int i = 0; i < 4; i++){
            cout << &a[i] << "\n";
      }

      cout << a << "\n";
      return 0;
}