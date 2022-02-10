#include <iostream>

using namespace std;

int main(){
      int age[7];
      double ave[7];

      for(int i = 0; i < 7; i++){
            cin >> age[i] >> ave[i];
      }

      // we want to find the most ave and the least age.
      double max = ave[0];
      int min = age[0];
      for(int i = 1; i < 7; i++){
            if(ave[i] > max){
                  max = ave[i];
            }
            if(age[i] < min){
                  min = age[i];
            }
      }

      cout << "The most ave is: " << max << "\n";
      cout << "The least age is: " << min << "\n";

      return 0;
}