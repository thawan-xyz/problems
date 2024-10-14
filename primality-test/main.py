import math

readline = lambda : int(input())
writeline = lambda x : print(x, end = '\n')

# @author: Thawan, 2024-10-04
# @problem: Primality Test (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

def mod(x: int, l: list) -> bool:
    return any(x % i == 0 for i in l)

def prime(x: int) -> bool:
    if x <= 1:
        return False
    elif x < 4:
        return True

    for i in [2, 3, 5] + [n for n in range(5, math.isqrt(x) + 1, 6)]:
        if mod(x, [i, i + 2]):
            return False
    return True

def main():
    T: int = readline()

    for _ in range(T):
        N: int = readline()

        if prime(N):
            writeline('YES')
        else:
            writeline('NO')
