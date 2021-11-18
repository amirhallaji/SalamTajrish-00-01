#include <iostream>

using namespace std;
int main(){

      int n;
      cin >> n;

      char input;
      bool isValid = true;
      for(int i = 0; i < n; i++){
            cin >> input;
            isValid = (input == ',' || input == ';' || input == '!' || input == '%' 
            || input == '<' || input == '>' || input == '(' || input == ')' || input == '$') ? false : true;
            
            if(!isValid){
                  cout << "INVALID" << endl;
                  break;
            }
      }
      if(isValid){
            cout << "VALID" << endl;
      }


      return 0;
}