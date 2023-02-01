/*
find largest three elements in array
*/


#include<iostream>

void find3Largest(int arr[], int n){
  int first;
  int second;
  int third;

  third = second = first = INT_MIN;

  for(int i = 0; i < n; i++){
    if(arr[i] > first) {
      third = second;
      second = first;
      first = arr[i];
    } else if(arr[i] > second){
      third = second;
      second = arr[i];
    } else if(arr[i] > third){
      arr[i] = third;
    }
  }
  std::cout<<"first: " << first << " second: " << second << " third: " << third;

}


int main() {
  int arr[] = {1,2,3,4,5};

  int n = sizeof(arr) / sizeof(arr[0]);

  find3Largest(arr, n);

  return 0;
}
