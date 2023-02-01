/*
find the three largest elements in an array.
*/

#include <iostream>

void find3Largest(int arr[], int len){
  int first;
  int second;
  int third;

  first = second = third = INT_MIN;


  for(int i = 0; i < len; i++){
    // if (len < 3){
    //   std::cout << "array length can't be less then 3";
    // }
    if(arr[i] > first){
      third = second;
      second = first;
      first = arr[i];
    }
    else if(arr[i] > second){
      third = second;
      second = arr[i];
    }
    else if(arr[i] > third){
      third = arr[i];
    }
  }
  std::cout << "first: " << first << " second: " << second << " third: " << third;
}

int main() {
  int arr[] = {4, 23, 5, 9, 43, 3, 6, 8, 9, 12};
  int len = sizeof(arr) / sizeof(arr[0]);

  find3Largest(arr, len);

  return 0;
}
