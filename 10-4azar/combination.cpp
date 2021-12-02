#include <iostream>

using namespace std;

int combination(int n, int k);
int factorial(int number);

int combination(int n, int k){
      if(n < 0 || k < 0 || k > n){
            return 0;
      }
      return factorial(n) / (factorial(n-k) * factorial(k));
}

int factorial(int number){
      if(number == 0){
            return 1;
      }
      else if(number < 0){
            return 0;
      }
      int result = 1;
      for(int i = 1; i <= number; i++){
            result *= i;
      }
      return result;
}

int main(){
      int n, k;
      cin >> n >> k;
      cout << combination(n, k);
      return 0;
}