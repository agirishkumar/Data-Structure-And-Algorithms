def bubbleSort(arr):
  """
  Sorts an array of elements using the bubble sort algorithm.

  Parameters:
  arr (list): The list of elements to be sorted.

  Returns:
  None
  """
  for i in range(len(arr)):
    for j in range( len(arr) - 1, i, -1):
      if arr[j-1] > arr[j ]:
        arr[j], arr[j - 1] = arr[j - 1], arr[j]


if __name__ == '__main__':
  arr = [64, 34, 25, 12, 22, 11, 90]
  bubbleSort(arr)
  print(arr)