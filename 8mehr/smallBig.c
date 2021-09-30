#include <stdio.h>

int main() {
      char first, second;
      scanf("%c", &first);
      scanf("%c", &second);

      first -= 32;
      second += 32;
      printf("%c %c", first, second);
      return 0;
}