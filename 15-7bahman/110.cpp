#include <iostream>
#include <iomanip>

using namespace std;

int main(){
      int a, b, c;
      cin >> a >> b >> c;

      int coeff1, coeff2, coeff3;

      coeff1 = a / 100;
      coeff2 = b / 100;
      coeff3 = c / 100;

      int score1, score2, score3;
      score1 = a % 100;
      score2 = b % 100;
      score3 = c % 100;

      double average = (score1 * coeff1 + score2 * coeff2 + score3 * coeff3) / double (coeff1 + coeff2 + coeff3);

      cout << fixed << setprecision(4) << average << "\n";
}