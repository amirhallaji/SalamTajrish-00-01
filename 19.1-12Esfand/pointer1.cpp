#include <iostream>

using namespace std;

int main(){
      int a = 6;
      int *b = &a; 
      cout << b << "\n";
      // cout << *b << "\n";

      *b = 4;
      cout << b << "\n";
      cout << a << "\n";
      return 0;
}