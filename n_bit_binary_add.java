import java.util.Arrays;

public class n_bit_binary_add {

  /**
   * ADD_BINARY_INTEGERS takes two arrays of binary integers and adds them together.
   *
   * @param  A  array of binary integers
   * @param  B  array of binary integers
   * @return     array of binary integers representing the sum
   */
  public static int[] ADD_BINARY_INTEGERS(int[] A, int[] B) {
    int n = A.length;
    int[] C = new int[n + 1];  // Initialize the result array with an extra space for carry
    int carry = 0;

    for (int i = n - 1; i >= 0; --i) {
        int total = A[i] + B[i] + carry;
        C[i + 1] = total % 2; // Determine the bit value
        carry = total / 2;    // Determine the carry
    }

    C[0] = carry; // Set the carry at the most significant bit
    return C;
}
  

  /**
   * A description of the entire Java function.
   *
   * @param  paramName  description of parameter
   * @return           description of return value
   */
  public static void main(String[] args) {
    int[] A = {1, 0, 1, 1, 0}; // Binary for 22
        int[] B = {1, 1, 0, 1, 1}; // Binary for 27
        int[] result = ADD_BINARY_INTEGERS(A, B);

        System.out.println(Arrays.toString(result));
  }
}
