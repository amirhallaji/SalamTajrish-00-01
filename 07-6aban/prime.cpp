#include <iostream>
#include <cmath>

using namespace std;
int main(){

      int a, b;
      bool prime = true;
      cin >> a >> b;
      if(a > b){
            int temp = a;
            a = b;
            b = temp;
      }

      int i = a + 1;
      while(i < b){
            prime = true;
            int j = 2;
            while(j <= sqrt(i)){
                  if(i % j == 0){
                        prime = false;
                        break;
                  }
                  j++;
            }
            if(prime){
                  cout << i << " ";
            }
            i++;
      }

      return 0;
}