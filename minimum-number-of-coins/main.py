import math

# @author: Thawan Ribeiro, 2024-09-26
# @problem: Minimum Number of Coins (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

read = lambda: int(input())

T: int = read()

for _ in range(T):
    X: int = read()

    N: int = -1

    if X % 5 == 0:
        N = (X // 10) + ((X % 10) // 5)

    print(N)
