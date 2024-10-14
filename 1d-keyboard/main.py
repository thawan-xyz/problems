import math

# @author: Thawan Ribeiro, 2024-09-29
# @problem: [ABC373] - 1D Keyboard (AtCoder)
# @url: https://atcoder.jp/contests/abc373

read = lambda: input()
write = lambda text: print(text, end = '')

A: str = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
S: str = read()

D: dict = {}
for x, c in enumerate(S):
    D[c] = x + 1

T: int = 0
for i in range(len(A) - 1):
    T += abs(D[A[i]] - D[A[i + 1]])

write(T)
