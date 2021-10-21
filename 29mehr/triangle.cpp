#include <iostream>
#include <string>

using namespace std;

int main(){
      double a, b, c;
      cin >> a >> b >> c;

      if((a + b > c) && (a + c > b) && (b + c > a)){
            cout << "It is possible" << endl;
      }
      else {
            cout << "Not Possible." << endl;
      }

      string result;
      result = (a + b > c) && (a + c > b) && (b + c > a) == true ? "It is possible" : "Not Possible";
      cout << "result: " << result << endl;

      return 0;
}