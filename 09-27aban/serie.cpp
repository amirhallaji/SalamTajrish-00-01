#include <iostream>
#include <cmath>

using namespace std;

int main(){

      int n;
      cin >> n; // n=4 -> 1 + 11 + 111 + 1111

      int serieNumber = 0;
      long long int sum = 0;


      for(int i = 0; i < n; i++){
            serieNumber = serieNumber * 10 + 1;
            sum += serieNumber;
      }
      cout << sum << endl;


      return 0;
}