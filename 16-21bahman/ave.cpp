#include <iostream>

using namespace std;

int main(){

      double grades[10];

      double sum = 0;
      for(int i = 0; i < 10; i++){
            cin >> grades[i];
            sum += grades[i];
      }
      double ave = sum / 10;
      cout << ave << "\n";
}