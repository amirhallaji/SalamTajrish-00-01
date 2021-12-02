#include <iostream>

using namespace std;

int main() {
      int number1 = 9;

      cout << ++number1 << endl;
      cout << number1 << endl;

      int number2 = 9;
      cout << number2++ << endl;
      cout << number2 << endl;

      int number, age = 19;
      number = ++age;

      cout << number << endl;

      return 0;
}