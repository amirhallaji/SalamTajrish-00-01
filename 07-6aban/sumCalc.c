#include <stdio.h>

int main(){
      int sum = 0;
      int n;
      scanf("%d", &n);

      while(n > 0){
            sum += n;
            n--;
      }

      printf("sum is: %d\n", sum);
      printf("---------------------\n");

      scanf("%d", &n);
      sum = 0;
      int i = 1;
      while(i <= n){
            sum += i;
            i++;
      }
      printf("sum is: %d\n", sum);
      return 0;
}