#include <iostream>

using namespace std;
int main(){
      int a, b, c;
      cin >> a >> b >> c;

      int max, min, mid;
      if(a > b && a > c){
            max = a;
      }
      else if(b > c && b > a){
            max = b;
      }
      else {
            max = c;
      }

      if(a < b && a < c){
            min = a;
      }
      else if(b < c && b < a){
            min = b;
      }
      else {
            min = c;
      }

      mid = a + b + c - min - max;

      int d;
      cin >> d;
      if(d < min){
            cout << "Less" << endl;
      }
      else if(d > min && d < mid){
            cout << "Mid1" << endl;
      }
      else if(d > mid && d < max){
            cout << "Mid2" << endl;
      }
      else if(d > max) {
            cout << "More" << endl;
      }
      else {
            cout << "Equal" << endl;
      }

      

      return 0;
}