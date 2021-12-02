#include <iostream>
#include <cmath>

using namespace std;

double power(int a, int b){
      int result = 1;
      for(int i = 0; i < b; i++){
            result *= a;
      }
      return result;
}

int main(){
      int a, b;
      cin >> a >> b;
      double res = pow(a, b);
      double myres = power(a, b);
      cout << myres << endl;
      return 0;
}