import math

# @author: Thawan Ribeiro, 2024-03-14
# @problem: Factorial (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

read = lambda: int(input())

T: int = read()

for _ in range(T):
    N: int = read()

    print(math.factorial(N))
