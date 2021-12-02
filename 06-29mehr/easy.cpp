#include <iostream>
#include <string>

using namespace std;

int main(){
      int a, b;
      cin >> a >> b;
      if((a % b == 0) && ((a % 2 == 0) || (b % 2 == 0))){
            cout << "Yes" << endl;
      }
      else {
            cout << "No" << endl;
      }

      string result;
      result = (a % b == 0) && ((a % 2 == 0) || (b % 2 == 0)) ? "Yes" : "No";

      return 0;
}