
def insertion_sort(A):
  """
  Perform insertion sort on the input list A and return the sorted list.

  Time Complexity: O(n^2)
  """
  for j in range(1, len(A)):
    key = A[j]
    i = j - 1
    while i >= 0 and A[i] > key:
      A[i + 1] = A[i]
      i = i - 1
    A[i + 1] = key
  return A

A = [29,10,14,37,13]
sorted_list = insertion_sort(A)
print(sorted_list)