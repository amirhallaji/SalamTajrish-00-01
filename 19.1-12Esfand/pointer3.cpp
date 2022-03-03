#include <iostream>

using namespace std;

void changeArray(int a[], int length){
      for(int i = 0; i < length; i++){
            a[i] = 1;
      }
}

int main(){
      int a[5] = {2, 18, 32, 6, 7};

      for(int i = 0; i < 5; i++){
            cout << a[i] << " ";
      }
      cout << endl;
      changeArray(a, 5);
      
      for(int i = 0; i < 5; i++){
            cout << a[i] << " ";
      }
      cout << endl;
      return 0;
}