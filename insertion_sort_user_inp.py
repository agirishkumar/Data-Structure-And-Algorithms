from insertion_sort import insertion_sort

print("Enter the list of integers separated by space: ")

# Taking input from user  
input_list = list(map(int,input().split()))
sorted_input_list = insertion_sort(input_list)
print("sorted list: ", sorted_input_list)
