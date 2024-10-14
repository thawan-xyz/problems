import math

# @author: Thawan Ribeiro, 2024-09-24
# @problem: Finding Square Root (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

read = lambda: int(input())

T: int = read()

for _ in range(T):
    N: int = read()

    print(math.isqrt(N))
