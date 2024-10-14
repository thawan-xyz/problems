from math import *

read = lambda: int(input())
readline = lambda: list(map(int, input().split()))
write = lambda x: print(x, end = '')
writeline = lambda x: print(x, end = '\n')

# @author: Thawan Ribeiro, 2024-09-29
# @problem: Too Many Floors (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

T: int = read()

for _ in range(T):
    X: int
    Y: int

    X, Y = readline()

    writeline(abs(ceil(X / 10) - ceil(Y / 10)))
