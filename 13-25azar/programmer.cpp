#include <iostream>

using namespace std;

int calcProgrammerDay(int n){
      static int limit = 0;
      if(limit == 2){
            return -1;
      }
      int base = 1;
      while(base * 2 <= n){
            base *= 2;
      }
      limit++;
      return base;

}

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(0);
      cout.tie(0);
      
      int n;
      cin >> n;
      if(n != 0){
            while(n != 0){
                  cout << calcProgrammerDay(n) << " ";
                  cin >> n;
            }
      }
      return 0;
}