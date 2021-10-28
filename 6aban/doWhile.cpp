#include <iostream>
#include <stdio.h>

using namespace std;
int main(){

      int counter = 11;
      while (counter < 10){
            cout << counter << " ";
            counter++;
      }

      printf("------Do While Loop--------\n");

      do{
            cout << counter << " ";
            counter++;

      }while(counter < 10);


      return 0;
}