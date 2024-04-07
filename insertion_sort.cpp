#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, size);
  return 0;
}
