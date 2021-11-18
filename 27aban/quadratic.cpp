#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

      double a, b, c;
      cin >> a >> b >> c;

      if(a == 0){
            cout << fixed << setprecision(2) << -c/b << endl;
      }
      else {
            double delta = b*b - 4 * a * c;
            if(delta < 0){
                  cout << "Equation has no real roots" << endl;
            }
            else if(delta == 0){
                  cout << fixed << setprecision(2) << -b/(2*a) << endl;
            }
            else{
                  double x1 = (-b - sqrt(delta)) / (2*a);
                  double x2 = (-b + sqrt(delta)) / (2*a);

                  if(x2 < x1){
                        double temp = x1;
                        x1 = x2;
                        x2 = temp;
                  }
                  cout << fixed << setprecision(2) << x2 << " " << fixed << setprecision(2) << x1 << endl;
            }
      }

      return 0;
}