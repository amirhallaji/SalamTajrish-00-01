#include <iostream>

using namespace std;
int main() {

      int a1, a2, a3, a4, a5;
      cin >> a1 >> a2 >> a3 >> a4 >> a5;

      int odd = a1 % 2 + a2 % 2 + a3 % 2 + a4 % 2 + a5 % 2;

      cout << 5 - odd << " " << odd << endl;

      return 0;
}