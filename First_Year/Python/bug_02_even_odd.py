# Bug Hunt: Even or Odd
# Difficulty: First Year - Easy
# Description: Check if a number is even or odd

def check_even_odd(num):
    """Return 'Even' if number is even, 'Odd' otherwise"""
    if num % 2 == 1:
        return "Even"
    else:
        return "Odd"

# Test
print(check_even_odd(4))  # Expected: Even, Got: Odd
print(check_even_odd(7))  # Expected: Odd, Got: Even
