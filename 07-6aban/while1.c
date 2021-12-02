#include <stdio.h>

int main() {

      int counter = 1;
      while(counter < 10){
            printf("counter: %d\n", counter);
            counter++;
      }

      printf("---------------------------\n");

      int counter2 = 10;
      while(counter2 >= 0){
            printf("counter2: %d\n", counter2);
            counter2--;
      }

      return 0;
}