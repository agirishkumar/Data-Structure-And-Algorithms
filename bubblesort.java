public class bubblesort{

  /**
   * A description of the entire Java function.
   *
   * @param  arr	description of parameter
   */
  static void bubbleSort(int[] arr) {
    
    for (int i =0; i < arr.length-1; i++){
      for (int j = arr.length-1; j>i; j--){
        if(arr[j-1] > arr[j]){
          int temp = arr[j-1];
          arr[j-1] = arr[j];
          arr[j] = temp;
        }
      }
    }
  }


  /**
   * The main function that sorts an array using the bubble sort algorithm and prints the sorted array.
   *
   * @param  args  the array of strings passed as arguments to the program
   * @return       void
   */
  public static void main(String[] args) {

    int[] arr = {5, 2, 4, 6, 1, 3};
    bubbleSort(arr);
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println("\n");
  }
}