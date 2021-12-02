#include <iostream>
#include <iomanip>

using namespace std;
int main() {
      double radius = 5.67, area;
      area = radius * radius * 3.14;
      cout << "area is: " << area << endl;
      cout << "area is: " << fixed <<  setprecision(1) << area << endl;
      return 0;
}