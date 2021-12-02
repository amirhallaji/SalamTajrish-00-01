#include <iostream>

using namespace std;
int main(){

      int n;
      cin >> n;
      while(n != 0){
            int sum = 0;
            for(int i = 1; i <= n; i++){
                  sum += i;
            }
            cout << sum << "\n";
            cin >> n;
      }

      return 0;
}