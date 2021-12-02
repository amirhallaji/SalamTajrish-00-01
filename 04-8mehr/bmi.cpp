#include <iostream>
#include <iomanip>

using namespace std;
int main() {

      double weight, height; 
      cin >> height >> weight ;

      double bmi = weight / (height * height);
      cout << fixed << setprecision(1) << bmi << endl;


      return 0;
}