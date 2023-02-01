/*
find the three largest elements in a sorted array.
*/

#include <iostream>
#include <algorithm>

void find(int arr[], int len){
  std::sort(arr, arr + len);

  int check = 0;
  int count = 1;
  for(int i = 1; i < len; i++){
    if(count < 4){
      if(check != arr[len-i]){
        std::cout << arr[len-i] << " ";
        check = arr[len-i];
        count++;
      }
    }
    else
      break;
  }
}

int main() {
  int arr[] = {4, 23, 5, 9, 43, 3, 6, 8, 9, 12};
  int len = sizeof(arr) / sizeof(arr[0]);

  find(arr, len);

  return 0;
}
