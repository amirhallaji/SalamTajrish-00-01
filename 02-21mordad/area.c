#include <stdio.h>
#include <math.h>

int main () {
      double radius, area;
      scanf("%lf", &radius);

      area = M_PI * radius * radius;
      printf("The area is: %lf", area);

}