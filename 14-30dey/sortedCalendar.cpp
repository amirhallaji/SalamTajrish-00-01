#include <iostream>
#include <cmath>

using namespace std;

void swap(double &a, double &b);
void sort(double &a, double &b, double &c);
void round1(double &a);

inline void swap(double &a, double &b){
      a = a + b;
      b = a - b;
      a = a - b;
}

inline void sort(double &a, double &b, double &c){

      // finding the greatest
      if(a < b){
            swap(a, b);
      }
      if(a < c){
            swap(a, c);
      }

      // finding the smallest;
      if(c > b){
            swap(b, c);
      }
}

void round1(int &a){
      if(a - floor(a) < 0.3){
            a = floor(a);
      }
      else{
            a = ceil(a);
      }
      cout << a << "\n";
}

int main(){
      double a, b, c;
      cin >> a >> b >> c;
      sort(a, b, c);

      round1(a);
      round1(b);
      round1(c);
      return 0;
}