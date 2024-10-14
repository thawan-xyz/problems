readline = lambda : list(map(int, input().split()))
writeline = lambda x : print(x, end = '\n')

# @author: Thawan, 2024-10-08
# @problem: Chef And Operators (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

def main():
    T: int
    T, = readline()

    for _ in range(T):
        A: int
        B: int
        A, B = readline()
        
        if A < B:
            writeline('<')
        elif A > B:
            writeline('>')
        else:
            writeline('=')
