import math

# @author: Thawan Ribeiro, 2024-09-27
# @problem: Self Defence Training (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

read = lambda: int(input())
readl = lambda: list(map(int, input().split()))

write = lambda text: print(text)

T: int = read()

for _ in range(T):
    N: int = read()
    A: list = readl()

    write(sum(X >= 10 and X <= 60 for X in A))
