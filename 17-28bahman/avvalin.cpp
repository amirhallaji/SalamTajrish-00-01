#include <iostream>

using namespace std;

int searchOne(int a[], int length){
      for(int i = 0; i < length; i++){
            if(a[i] == 1){
                  return i;
            }
      }
      return -1;
}

int main(){
      int a[1000];

      int n; 
      cin >> n;

      for(int i = 0; i < n; i++){
            cin >> a[i];
      }

      cout << searchOne(a, n);
      return 0;
}