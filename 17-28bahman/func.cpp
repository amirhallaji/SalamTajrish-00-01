#include <iostream>

using namespace std;

int sums(int a[], int length){
      int sum = 0;
      for(int i = 0; i < length; i++){
            sum += a[i];
      }
      return sum;
}

int main(){
      int a[10];

      for(int i = 0; i < 10; i++){
            cin >>  a[i];
      }
      
      int res = sums(a, 10);
      cout << res << "\n";



}