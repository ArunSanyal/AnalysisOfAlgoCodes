def insertion_sort(arr):
    n = len(arr)
    # Traverse through all array elements
    for i in range(1, n):
        key = arr[i]
        # Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        j = i - 1
        while j >= 0 and key < arr[j] :
                arr[j+1] = arr[j]
                j -= 1
        arr[j+1] = key
    return arr
my_arr = [64, 25, 12, 22, 11]
sorted_arr = insertion_sort(my_arr)
print(sorted_arr)