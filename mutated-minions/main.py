readline = lambda : list(map(int, input().split()))
writeline = lambda x : print(x, end = '\n')

# @author: Thawan, 2024-10-10
# @problem: Mutated Minions (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

def mod(x, d):
    return x % d

def main():
    T: int
    [T] = readline()

    for _ in range(T):
        N: int
        K: int
        [N, K] = readline()

        M: list = readline()
        writeline(sum(1 for X in M if mod(X + K, 7) == 0))
