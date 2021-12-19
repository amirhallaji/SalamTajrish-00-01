#include <iostream>

using namespace std;

void coronaCount(int temperature, int &count){
      if(temperature > 38){
            count++;
      }
}

int main(){

      int n;
      cin >> n;

      char command;
      int counter;
      int coronaCount = 0;
      for(int i = 0; i < n; i++){
            cin >> commmand;
            switch(command){
                  case 't':
                        cin >> counter;
                        int temperature;
                        for(int i = 0; i < counter; i++){
                              cin >> temperature;
                              coronaCount(temperature, coronaCount);
                        }
                        break;
                  case 'i':
                        break;
                  case 'v':
                        break;
            }
      }

      return 0;
}