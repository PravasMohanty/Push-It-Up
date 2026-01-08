# Bug Hunt: Reverse a List
# Difficulty: Second Year - Medium
# Description: Reverse a list using recursion

def reverse_list(lst):
    """Reverse a list using recursion"""
    if len(lst) == 0:
        return lst
    else:
        return lst + reverse_list(lst[:-1])

# Test
print(reverse_list([1, 2, 3, 4, 5]))  # Expected: [5, 4, 3, 2, 1]
