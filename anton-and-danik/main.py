import sys

input = sys.stdin.readline
print = sys.stdout.write

number_of_games = int(input())
games_outcomes = input()

anton_points = danik_points = 0
for i in range(number_of_games):
    if games_outcomes[i] == 'A':
        anton_points += 1
    elif games_outcomes[i] == 'D':
        danik_points += 1

if anton_points > danik_points:
    print('Anton')
elif danik_points > anton_points:
    print('Danik')
else:
    print('Friendship')
