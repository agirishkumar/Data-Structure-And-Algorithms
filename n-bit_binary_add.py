def n_bit_integer_adder(A,B):
  """
  Adds two n-bit integers represented as arrays A and B and returns the sum as an array C.
  
  Parameters:
  A (list): An array representing the first n-bit integer.
  B (list): An array representing the second n-bit integer.
  
  Returns:
  list: An array representing the sum of the two n-bit integers.
  """
  n = len(A)
  C = [0]*(n+1)
  carry = 0

  for i in range(n-1,-1,-1):
    sum = A[i] + B[i] + carry
    C[i+1] = sum%2
    carry = sum//2

  C[0] = carry
  return C

A = [1, 0, 1, 1, 0]  
B = [1, 1, 0, 1, 1]  
print(n_bit_integer_adder(A, B))
  