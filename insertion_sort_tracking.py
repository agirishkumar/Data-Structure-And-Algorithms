def insertion_sort_track(A):
  """
  Function to perform insertion sort on a list and track the number of comparisons and shifts made.
  
  Parameters:
  A (list): The list to be sorted.
  
  Returns:
  tuple: A tuple containing the sorted list, the number of comparisons made, and the number of shifts made.
  """
  comparisons = 0
  shifts = 0
  for j in range(1, len(A)):
    key = A[j]
    i = j - 1
    while i >= 0:
      comparisons += 1  # Increment comparisons here
      if A[i] > key:
        A[i + 1] = A[i]
        shifts += 1  # Increment shifts for each assignment
        i = i - 1
      else:
        break 
    A[i + 1] = key
    shifts += 1
  return (A, comparisons, shifts)

inp = [34, 8, 64, 51, 32, 21]
print(insertion_sort_track(inp))