#include <iostream>

using namespace std;


bool search(int a[], int value){
      for(int i = 0; i < sizeof(a) / sizeof(int); i++){
            if(a[i] == value)
                  return true;
      }
      return false;
}

int main(){
      int a[] = {9, 1, 30, 14};
      cout << search(a, 4) << "\n";
      cout << search(a, 9) << "\n";
}