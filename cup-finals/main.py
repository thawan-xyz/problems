import math

# @author: Thawan Ribeiro, 2024-09-27
# @problem: Self Defence Training (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

read = lambda: int(input())
readline = lambda: list(map(int, input().split()))

write = lambda text: print(text)

T: int = read()

for _ in range(T):
    X: int
    Y: int
    D: int

    X, Y, D = readline()

    if abs(X - Y) <= D:
        write('YES')
    else:
        write('NO')
