#include <iostream>
#include <vector>

using namespace std;
/**
 * Adds two binary integers represented as vectors.
 *
 * @param A vector representing the first binary integer
 * @param B vector representing the second binary integer
 *
 * @return Vector representing the sum of the two binary integers
 *
 * @throws None
 */
vector<int> ADD_BINARY_INTEGERS(const vector<int>& A, const vector<int>& B) {
    int n = A.size();
    vector<int> C(n + 1);  // Initialize the result vector with an extra space for carry
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
 * Main function to add binary integers and print the result.
 *
 * @return 0 if successful
 */
int main() {
    vector<int> A = {1, 0, 1, 1, 0}; // Binary for 22
    vector<int> B = {1, 1, 0, 1, 1}; // Binary for 27
    vector<int> result = ADD_BINARY_INTEGERS(A, B);

    for (int bit : result) {
        cout << bit;
    }
    cout << endl;

    return 0;
}
