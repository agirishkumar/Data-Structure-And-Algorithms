#include <iostream>
using namespace std;

/**
 * Merges two subarrays of arr[].
 *
 * @param arr The main array to be sorted
 * @param start Starting index of the first subarray
 * @param mid Middle index of the first subarray
 * @param end Ending index of the second subarray
 */
void merge(int arr[], int start, int mid, int end) {
  int left_size = mid - start + 1;
  int right_size = end - mid;

  int left_arr[left_size], right_arr[right_size];

  for(int i = 0; i < left_size; i++) {
    left_arr[i] = arr[start + i];
  }

  for(int i = 0; i < right_size; i++) {
    right_arr[i] = arr[mid + 1 + i];
  }

  int i = 0, j = 0, k = start;

  while (i < left_size && j < right_size) {
    if(left_arr[i] < right_arr[j]) {
      arr[k] = left_arr[i];
      i++;
    } else {
      arr[k] = right_arr[j];
      j++;
    }
    k++;
  }
  
  while(i < left_size) {
    arr[k] = left_arr[i];
    i++;
    k++;
  }

  while(j<right_size) {
    arr[k] = right_arr[j];
    j++;
    k++;
  }
  
}

/**
 * Sorts the given array using the merge sort algorithm.
 *
 * @param arr the array to be sorted
 * @param start the starting index of the array or sub-array
 * @param end the ending index of the array or sub-array
 *
 * @return void
 *
 * @throws None
 */
void mergeSort(int arr[], int start, int end) {
  if(start < end) {
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
  }
}



/**
 * The main function for the C++ program.
 *
 * @return an integer representing the exit status of the program
 *
 * @throws None
 */
int main() {

  int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  mergeSort(arr, 0, size - 1);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;  
}