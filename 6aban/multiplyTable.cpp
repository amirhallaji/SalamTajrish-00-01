#include <iostream>

using namespace std;

int main(){
      
      int i = 1, j = 1;
      while(i <= 10){
            j = 1;
            while(j <= 10){
                  cout << i * j << " ";
                  j++;
            }
            i++;
            cout << endl;
      }


      return 0;
}