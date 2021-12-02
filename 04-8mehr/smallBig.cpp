#include <iostream>

using namespace std;
int main(){
      char first, second;
      cin >> first >> second;
      first -= 32;
      second += 32;
      cout << first << " " << second << endl;
      return 0;
}