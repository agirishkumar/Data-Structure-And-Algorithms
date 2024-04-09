#include <iostream>
using namespace std;

/**
 * Sorts the given array using the bubble sort algorithm.
 *
 * @param arr the array to be sorted
 * @param n the number of elements in the array
 *
 * @return void
 *
 * @throws None
 */
void bubblesort(int arr[], int n) {
  
  for (int i = 0; i< n; i++){
    for (int j = n-1; j>i ; j--){
      if(arr[j-1] > arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}


/**
 * The main function executes a bubble sort on the given array and prints the sorted array.
 *
 * @param None
 *
 * @return None
 *
 * @throws None
 */
int main() {
  
  int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  bubblesort(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}