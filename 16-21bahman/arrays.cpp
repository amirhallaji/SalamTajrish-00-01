#include <iostream>
#include <string>

using namespace std;

int main(){

      string names[10];

      for(int i = 0; i < 10; i++){
            cin >> names[i];
      }
      
      
      for(int i = 0; i < 10; i++){
            cout << names[i] << " ";
      }
      return 0;
}