read = lambda : int(input())
readline = lambda : list(map(int, input().split()))
write = lambda x : print(x, end = '')
writeline = lambda x : print(x, end = '\n')

# @author: Thawan Ribeiro, 2024-10-01
# @problem: A or B (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

def f(n: int, d: int, t: int) -> int:
    return max(0, n - (d * t))

def main():
    t: int = read()

    for _ in range(t):
        x: int
        y: int
        x, y = readline()

        a: int = f(500, 2, x) + f(1000, 4, x + y)
        b: int = f(1000, 4, y) + f(500, 2, x + y)
        writeline(max(a, b))
