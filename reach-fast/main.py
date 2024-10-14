import math

readline = lambda : list(map(int, input().split()))
writeline = lambda x : print(x, end = '\n')

# @author: Thawan, 2024-10-10
# @problem: Reach Fast (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

def main():
    T: int
    [T] = readline()

    for _ in range(T):
        A: int
        B: int
        K: int
        [A, B, K] = readline()

        writeline(math.ceil(abs(A - B) / K))
