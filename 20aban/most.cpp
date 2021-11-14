#include <iostream>

using namespace std;
int main(){

      int n;
      cin >> n;
      int digitLength = 0;
      
      int copy = n;
      while(copy != 0){
            copy /= 10;
            digitLength++;
      }

      int min = n % 10, max = n % 10;
      int maxPos = digitLength, minPos = digitLength;
      n /= 10;
      while(digitLength != 0){
            if(n % 10 <= min){
                  min = n % 10;
            }
            else {
                  minPos--;
            }
            if(n % 10 >= max){
                  max = n % 10;
            }
            else{
                  maxPos--;
            }
            n /= 10;
            digitLength--;
      } 
      cout << maxPos << " " << minPos << "\n";

      return 0;
}