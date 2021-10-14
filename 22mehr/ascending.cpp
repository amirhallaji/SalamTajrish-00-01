#include <iostream>

using namespace std;

int main() {
      int a, b, c; 
      cin >> a >> b >> c;

      int max, min, mid;
      if(a > b && a > c) {
            max = a;
      }
      else if(b > a && b > c){
            max = b;
      }
      else {
            max = c;
      }

      if(a < b && a < c){
            min = a;
      }
      else if(b < a && b < c){
            min = b;
      }
      else {
            min = c;
      }
      mid = a + b + c - min - max;
      cout << min << " " << mid << " " << max << endl;

      return 0;
}