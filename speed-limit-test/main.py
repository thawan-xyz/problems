read = lambda: int(input())
readline = lambda: list(map(int, input().split()))
write = lambda x: print(x, end = '')
writeline = lambda x: print(x, end = '\n')

# @author: Thawan Ribeiro, 2024-09-29
# @problem: Speed Limit Test (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

T: int = read()

for _ in range(T):
    A: int
    X: int
    B: int
    Y: int

    A, X, B, Y = readline()

    ALICE: float = A / X
    BOB: float = B / Y

    if ALICE > BOB:
        writeline('ALICE')
    elif BOB > ALICE:
        writeline('BOB')
    else:
        writeline('EQUAL')
