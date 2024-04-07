public class mergeSort {


  /**
   * A description of the entire Java function.
   *
   * @param  args	description of parameter
   * @return         	description of return value
   */
  public static void main(String[] args) {

    int[] arr = {5, 2, 4, 6, 1, 3};
    mergesort(arr, 0, arr.length - 1);
    for (int i = 0; i < arr.length; i++) {
        System.out.print(arr[i] + " ");
    }
    System.out.println("\n");
  }

  /**
   * A description of the entire Java function.
   *
   * @param  arr  description of parameter
   * @param  p    description of parameter
   * @param  r    description of parameter
   * @return      description of return value
   */
  static void mergesort(int[] arr, int p, int r) {

    if (p < r) {
      int q = (p + r) / 2;
      mergesort(arr, p, q);
      mergesort(arr, q + 1, r);
      merge(arr, p, q, r);
    }
  }

  /**
   * A description of the entire Java function.
   *
   * @param  arr   description of parameter
   * @param  p     description of parameter
   * @param  q     description of parameter
   * @param  r     description of parameter
   * @return       description of return value
   */
  private static void merge(int[] arr, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[] = new int[n1];
    int R[] = new int[n2];

    for(int i = 0; i< n1; i++){
      L[i] = arr[p + i];
    }

    for (int j = 0; j < n2; j++) {
      R[j] = arr[q + 1 + j];
    }

    int i,j,k;

    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2) {
      if (L[i] <= R[j]) {
        arr[k] = L[i];
        i++;
      } else {
        arr[k] = R[j];
        j++;
      }
      k++;
    }

    while (i < n1) {
      arr[k] = L[i];
      i++;
      k++;
    }

    while (j < n2) {
      arr[k] = R[j];
      j++;
      k++;
    }
  }
  
}
