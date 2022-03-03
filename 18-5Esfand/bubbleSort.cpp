#include <iostream>

using namespace std;

void swap(int &a, int &b){
      int temp = a;
      a = b;
      b = temp;
}

void bubbleSort(int arr[], int size){
      for(int i = 0; i < size; i++){
            for(int j = 0; j < size - i - 1; j++){
                  if(arr[j] > arr[j+1]){
                        swap(arr[j], arr[j+1]);
                  }
            }
      }
}

int main(){
      int size = 6;
      int arr[size] = {5, 4, 199, 76, 43, 67};

      cout << "before sorting: ";
      for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
      }
      cout << "\n";

      bubbleSort(arr, size);
 
      cout << "after sorting: ";
      for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
      }
      cout << "\n";
      return 0;
}



// [3, 5, 2, 199, 18, 1, 0, -9] -> [-9, 0, 1, 2, 3, 5, 18, 199]

/*
[6, 5, 3, 1, 8, 7, 2, 4]
[5, 6, 3, 1, 8, 7, 2, 4]
[5, 3, 6, 1, 8, 7, 2, 4]
[5, 3, 1, 6, 8, 7, 2, 4]
[5, 3, 1, 6, 7, 8, 2, 4]
[5, 3, 1, 6, 7, 2, 8, 4]
[5, 3, 1, 6, 7, 2, 4, 8]
[3, 5, 1, 6, 7, 2, 4, 8]

....

[1, 2, 3, 4, 5, 6, 7, 8]
*/
