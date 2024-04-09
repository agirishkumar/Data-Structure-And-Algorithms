public class heapSort {




  public static void main(String[] args) {

    int[] arr = {5, 2, 4, 6, 1, 3};
    heapsort(arr);
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println("\n");
  }

  private static void heapsort(int[] arr) {
    
    for (int i = arr.length/2 -1; i>= 0; i--){
      heapify(arr, arr.length, i);
    }

    for (int i = arr.length-1; i>=0; i--){
      int temp = arr[0];
      arr[0] = arr[i];
      arr[i] = temp;
      heapify(arr, i, 0);
    }
  }

  private static void heapify(int[] arr, int length, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < length && arr[left] > arr[largest]){
      largest = left;
    }

    if(right < length && arr[right] > arr[largest]){
      largest = right;
    }

    if(largest != i){
      int temp = arr[i];
      arr[i] = arr[largest];
      arr[largest] = temp;
      heapify(arr, length, largest);
    }
  }
  
}
