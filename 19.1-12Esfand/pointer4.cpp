#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int *randomArray(){
      static int r[10];
      srand(time(0));
      for(int i = 0; i < 10; i++){
            r[i] = rand();
      }
      return r;
}

int main(){
      int *random_array = randomArray();

      for(int i = 0; i < 10; i++){
            cout << random_array[i] << " ";
      }
      return 0;
}