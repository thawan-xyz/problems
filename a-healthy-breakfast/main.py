import math

# @author: Thawan Ribeiro, 2024-09-27
# @problem: [ABC360] - A Healthy Breakfast (AtCoder)
# @url: https://atcoder.jp/contests/abc360

read = lambda: input()
write = lambda text: print(text, end = '')

D: dict = {}
S: str = read()

for i in range(3):
    D[S[i]] = i

if D['R'] < D['M']:
    write('Yes')
else:
    write('No')
