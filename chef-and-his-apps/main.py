import math

# @author: Thawan Ribeiro, 2024-09-26
# @problem: Chef and his Apps (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

read = lambda: map(int, input().split())

T: int
T, = read()

for _ in range(T):
    S: int
    X: int
    Y: int
    Z: int

    S, X, Y, Z = read()

    M: int = S - (X + Y)

    if M >= Z:
        print(0)
    elif M + X >= Z or M + Y >= Z:
        print(1)
    elif M + X + Y >= Z:
        print(2)
