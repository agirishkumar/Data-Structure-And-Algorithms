def heapify(arr, n, i):
  """
  Perform heapify operation on the array at index 'i'.
  
  Parameters:
      arr (list): The input array.
      n (int): The size of the heap.
      i (int): The index of the current element.
  
  Returns:
      None
  """

  largest = i
  l = 2 * i + 1
  r = 2 * i + 2

  if l < n and arr[i] < arr[l]:
    largest = l

  if r < n and arr[largest] < arr[r]:
    largest = r

  if largest != i:
    arr[i], arr[largest] = arr[largest], arr[i]
    heapify(arr, n, largest)

def heapSort(arr):
  """
  Generate a sorted array using the heap sort algorithm.

  Parameters:
      arr (list): The unsorted array to be sorted.

  Returns:
      list: The sorted array.
  """

  n = len(arr)

  # Build max-heap
  for i in range(n//2-1, -1, -1):
    heapify(arr, n, i)

  # Heap sort
  for i in range(n-1, 0, -1):
    arr[0], arr[i] = arr[i], arr[0]
    heapify(arr, i, 0)

  return arr

if __name__ == '__main__':
  arr = [64, 34, 25, 12, 22, 11, 90]
  sorted_arr = heapSort(arr)
  print(sorted_arr)