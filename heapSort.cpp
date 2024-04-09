#include <iostream>
using namespace std;


/**
 * Rearranges the array elements to maintain the max heap property.
 *
 * @param arr the input array
 * @param n the size of the array
 * @param i the index to start heapifying from
 *
 * @throws None
 */
void heapify(int arr[], int n, int i) {
  
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;
  if (left < n && arr[largest] < arr[left]) {
    largest = left;
  }
  if (right < n && arr[largest] < arr[right]) {
    largest = right;
  }
  if (largest != i) {
    int temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    heapify(arr, n, largest);
  }
}
/**
 * Sorts an array using the heapsort algorithm.
 *
 * @param arr the array to be sorted
 * @param n the size of the array
 */
void heapsort(int arr[], int n){
  for (int i = n / 2 - 1; i >= 0; i--) {
    heapify(arr, n, i);
  }

  for (int i = n - 1; i >= 0; i--) {
    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;
    heapify(arr, i, 0);
  }
}

/**
 * Main function that sorts an array using heapsort algorithm and outputs the sorted array.
 *
 * @return 0 indicating successful execution
 */
int main() {
  int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  heapsort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}