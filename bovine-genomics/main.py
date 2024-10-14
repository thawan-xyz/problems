import sys

def check_genomes() -> bool:
    for i in range(number_of_cows):
        for j in range(number_of_cows):
            if spotted_genomes[i][k] == spotless_genomes[j][k]:
                return False
    return True

sys.stdin = open('cownomics.in', 'r')
sys.stdout = open('cownomics.out', 'w')

input = sys.stdin.readline
print = sys.stdout.write

number_of_cows, number_of_genomes = map(int, input().split())

spotted_genomes = []
spotless_genomes = []

for _ in range(number_of_cows):
    spotted_genomes.append(input())
for _ in range(number_of_cows):
    spotless_genomes.append(input())

genome_count = 0
for k in range(number_of_genomes):
    if check_genomes():
        genome_count += 1

print(str(genome_count))
