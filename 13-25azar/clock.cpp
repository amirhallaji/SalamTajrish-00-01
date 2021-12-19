#include <iostream>
#include <iomanip>

using namespace std;

double findMod(double a, double b)
{
    double mod;
    // Handling negative values
    if (a < 0)
        mod = -a;
    else
        mod =  a;
    if (b < 0)
        b = -b;
 
    // Finding mod by repeated subtraction
     
    while (mod >= b)
        mod = mod - b;
 
    // Sign of result typically depends
    // on sign of a.
    if (a < 0)
        return -mod;
 
    return mod;
}

double calcAngle(int h, int m){
      double angle = abs(30 * h - 5.5 * m);
      return findMod(angle, 180.00);
}

int main(){
      int h, m;
      cin >> h >> m;
      cout << fixed << setprecision(2) << calcAngle(h, m) ;
      return 0;
}