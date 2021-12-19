#include <iostream>
#include <string>

using namespace std;

string recognizer(int number){
      int digit = number % 10;
      number /= 10;

      bool ascending = true, descending = true;
      while(number > 0){
            if(digit > number % 10){ // 123
                  descending = false;
            }
            else if(digit < number % 10){ // 321
                  ascending = false;
            }
            digit = number % 10;
            number /= 10;
      }
      if(ascending){
            return "Ascending";
      }
      else if(descending){
            return "Descending";
      }
      return "none";
}

int main(){
      int number;
      cin >> number;
      cout << recognizer(number);
      return 0;
}