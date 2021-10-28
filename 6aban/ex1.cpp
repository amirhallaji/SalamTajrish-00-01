#include <iostream>
#include <cmath>

using namespace std;

int main(){
      int counter = 0, n;

      do {
            cin >> n;
            cout << pow(n, 2) << "  ";
            counter++;
      }while(n != 0 || counter != 2);
}