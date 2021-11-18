#include <iostream>

using namespace std;
int main(){

      int x;
      cin >> x;

      double answer = 0;
      int factorial = 1;
      double pow = 1;
      int negative = 0;

      for(int i = 1; i <= 9; i += 2){
            for(int j = i; j >= 1; j--){
                  factorial *= j;
            }

            for(int j = 1; j <= i; j++){
                  pow *= x;
            }
            
            negative = (i + 1) % 4 == 0 ? -1 : +1;

            answer += (negative) * (pow / factorial);

            pow = 1;
            factorial = 1;
      }

      cout << answer << endl;

      return 0;
}