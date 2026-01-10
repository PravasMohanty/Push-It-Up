# Bug Hunt: Fibonacci Sequence
# Difficulty: Second Year - Medium
# Description: Generate nth Fibonacci number

def fibonacci(n):
    """Return the nth Fibonacci number"""
    return fibonacci(n - 1) + fibonacci(n - 2)

# Test - This will cause stack overflow!
# print(fibonacci(5))  # Expected: 5
