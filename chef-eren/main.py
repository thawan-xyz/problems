import math

# @author: Thawan Ribeiro, 2024-09-26
# @problem: Chef Eren (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

read = lambda: map(int, input().split())

T: int
T, = read()

for _ in range(T):
    N: int

    A: int
    B: int

    N, A, B = read()

    E: int = N // 2
    O: int = N - E

    print(E * A + O * B)
