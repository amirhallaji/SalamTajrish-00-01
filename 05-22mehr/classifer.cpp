#include <iostream>

using namespace std;

int main(){
      char ch;
      cin >> ch;
      
      if((int)ch >= 65 && (int)ch <= 90){
            cout << "Big Letter" << endl;
      }
      else if((int)ch >= 97 && (int)ch <= 122){
            cout << "Small Letter" << endl;
      }
      else if((int)ch >= 48 && (int)ch <= 57){
            cout << "A Number" << endl;
      }
      else {
            cout << "Anything else" << endl;
      }

      return 0;
}