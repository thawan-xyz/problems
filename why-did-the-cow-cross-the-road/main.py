import sys

sys.stdin = open('circlecross.in', 'r')
sys.stdout = open('circlecross.out', 'w')

input = sys.stdin.readline
print = sys.stdout.write

road = input().strip()

cows = []
positions = {}

for i, cow in enumerate(road):
    if cow in positions:
        positions[cow].append(i)
    else:
        cows.append(cow)
        positions[cow] = [i]

number_of_pairs = 0
for i in range(len(cows) - 1):
    for j in range(i + 1, len(cows)):
        i_entry, i_exit = positions[cows[i]]
        j_entry, j_exit = positions[cows[j]]

        ij_pair = i_entry < j_entry < i_exit < j_exit
        if ij_pair:
            number_of_pairs += 1

print(str(number_of_pairs))
