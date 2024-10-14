import math

readline = lambda : list(map(int, input().split()))
writeline = lambda x : print(x, end = '\n')

# @author: Thawan, 2024-10-10
# @problem: Chef and Races (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

def main():
    T: int
    T, = readline()

    for _ in range(T):
        X: int
        Y: int
        A: int
        B: int
        X, Y, A, B = readline()

        C: set = {X, Y}
        R: set = {A, B}

        writeline(len(C - R))
