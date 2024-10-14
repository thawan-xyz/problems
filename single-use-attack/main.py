import math

readline = lambda : list(map(int, input().split()))
writeline = lambda x : print(x, end = '\n')

# @author: Thawan, 2024-10-10
# @problem: Single-use Attack (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

def main():
    T: int
    [T] = readline()

    for _ in range(T):
        H: int
        X: int
        Y: int
        [H, X, Y] = readline()

        writeline(math.ceil((H - Y) / X) + 1)
