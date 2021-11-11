#include <iostream>

using namespace std;

int main(){
      char a, b;
      cin >> a >> b;
      if(a > b){
            char temp = a;
            a = b;
            b = temp;
      }

      int diff = (int)b - (int)a + 1;


      for(int i = 0; i < diff; i++){
            for(int j = 0; j <= diff - i; j++){
                  cout << " ";
            }
            for(int j = 0; j <= i; j++){
                  cout << (char)((int)a + j) << " ";
            }
            cout << "\n";
      }

      for(int i = diff - 1; i >= 0; i--){
            for(int j = diff - i + 1; j >= 0; j--){
                  cout << " ";
            }
            for(int j = 0; j < i; j++){
                  cout << (char)((int)a + j) << " ";
            }
            cout << "\n";
      }


      return 0;
}