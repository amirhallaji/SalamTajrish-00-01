#include <iostream>

using namespace std;

int fibo(int n){
      int a = 1, b = 1, c;
      for(int i = 0; i < n - 2; i++){
            c = a + b;
            a = b;
            b = c;
      }
      return c;
}

int recFibo(int n){
      if(n == 1 || n == 2){
            return 1;
      }
      return recFibo(n - 1) + recFibo(n - 2); 
}

int main(){
      cout << fibo(7) << endl;
      cout << recFibo(7);
      return 0;
}