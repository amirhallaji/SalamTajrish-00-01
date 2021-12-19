#include <bits/stdc++.h>

using namespace std;

bool is_right_tri(int x1, int y1, int x2, int y2, int x3, int y3); 
bool is_Isosceles_tri(int x1, int y1, int x2, int y2, int x3, int y3);
double oq_distance_2(int x1, int y1, int x2, int y2); 


bool is_right_tri(int x1, int y1, int x2, int y2, int x3, int y3){
      double a = oq_distance_2(x1, y1, x2, y2);
      double b = oq_distance_2(x1, y1, x3, y3);
      double c = oq_distance_2(x2, y2, x3, y3);


      return (abs(c*c - a*a + b*b) < 0.5) || (abs(a*a - b*b + c*c) < 0.5) || 
                                                (abs(b*b - a*a + c*c) < 0.5);
}

bool is_Isosceles_tri(int x1, int y1, int x2, int y2, int x3, int y3){
      double a = oq_distance_2(x1, y1, x2, y2);
      double b = oq_distance_2(x1, y1, x3, y3);
      double c = oq_distance_2(x2, y2, x3, y3);

      return a == b || a == c || b == c;      
}

double oq_distance_2(int x1, int y1, int x2, int y2){
      return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}


int main(){
      int x1, y1, x2, y2, x3, y3;
      cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

      if(is_right_tri(x1, y1, x2, y2, x3, y3)){
            cout << 1 << " ";
      }
      else {
            cout << 0 << " ";
      }
      if(is_Isosceles_tri(x1, y1, x2, y2, x3, y3)){
            cout << 1 << " ";
      }
      else {
            cout << 0 << " ";
      }

      return 0;
}