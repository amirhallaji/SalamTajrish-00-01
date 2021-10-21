#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
      double a, b;
      cin >> a >> b;
      a *= 10000;
      b *= 10000;

      a = round(a);
      b = round(b);

      string result;     
      result = (a == b) ? "Equal" : "Not Equal";
      cout << result << endl;
}