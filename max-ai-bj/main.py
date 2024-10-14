read = lambda: int(input())
readline = lambda: list(map(int, input().split()))
write = lambda x: print(x, end = '')
writeline = lambda x: print(x, end = '\n')

# @author: Thawan Ribeiro, 2024-09-29
# @problem: [ABC373] - Max Ai+Bj (AtCoder)
# @url: https://atcoder.jp/contests/abc373

N: int = read()

A: int = max(readline())
B: int = max(readline())

write(A + B)
