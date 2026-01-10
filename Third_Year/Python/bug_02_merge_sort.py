# Bug Hunt: Merge Sort Implementation
# Difficulty: Third Year - Hard
# Description: Sort array using merge sort algorithm

def merge_sort(arr):
    """Sort array using merge sort"""
    if len(arr) <= 1:
        return arr
    
    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])
    
    return merge(left, right)

def merge(left, right):
    """Merge two sorted arrays"""
    result = []
    i = j = 0
    
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    
    return result

# Test
print(merge_sort([38, 27, 43, 3, 9, 82, 10]))  # Expected: [3, 9, 10, 27, 38, 43, 82]
