#include <iostream>

using namespace std;
int main(){

      int n; 
      cin >> n;

      int a0 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
      
      while(n > 0){
            switch(n % 10){
                  case 0:
                        a0++;
                        break;
                  case 1:
                        a1++;
                        break;
                  case 2:
                        a2++;
                        break;
                  case 3:
                        a3++;
                        break;
                  case 4:
                        a4++;
                        break;
                  case 5:
                        a5++;
                        break;
                  case 6:
                        a6++;
                        break;
                  case 7:
                        a7++;
                        break;
                  case 8:
                        a8++;
                        break;
                  case 9:
                        a9++;
                        break;
            }
            n /= 10;
      }

            cout << "zero: " << a0 << endl;
            cout << "one: " << a1 << endl;
            cout << "two: " << a2 << endl;
            cout << "three: " << a3 << endl;
            cout << "four: " << a4 << endl;
            cout << "five: " << a5 << endl;
            cout << "six: " << a6 << endl;
            cout << "seven: " << a7 << endl;
            cout << "eight: " << a8 << endl;
            cout << "nine: " << a9 << endl;

      return 0;
}

//341266378