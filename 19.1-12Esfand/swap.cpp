#include <iostream>

using namespace std;

void vSwap(int a, int b){
      int temp = a;
      a = b;
      b = temp;
}
void pSwap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
}
void rSwap(int &a, int &b){
      int temp = a;
      a = b;
      b = temp;
}


int main(){
      int a = 1, b = 2;
      vSwap(a, b);
      cout << a << " " << b << "\n";

      rSwap(a, b);
      cout << a << " " << b << "\n";

      a = 1;
      b = 2;
      pSwap(&a, &b);
      cout << a << " " << b << "\n";
      return 0;
}
