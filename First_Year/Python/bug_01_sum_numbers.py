# Bug Hunt: Sum of Numbers
# Difficulty: First Year - Easy
# Description: This program should calculate the sum of numbers from 1 to n

def sum_numbers(n):
    """Calculate sum of numbers from 1 to n"""
    total = 0
    i = 0
    #fixed the inclusion of the nth element in the loop by adding "=" to the condition
    while i <= n:
        total += i
        i += 1
    return total

# Test
print(f"Sum of 1 to 5: {sum_numbers(5)}")  # Expected: 15, Got: 10
