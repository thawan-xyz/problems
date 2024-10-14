import std / algorithm
import std / strutils
import std / tables

type str = string
type array[T] = seq[T]
type map[K, V] = Table[K, V]

# @author: Thawan, 2024-10-06
# @problem: Cyclic Quadrilateral (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

let T: int = stdin.readLine.parseInt

for i in 1..T:
    let entry: array[str] = stdin.readLine.split
    
    let A: int = entry[0].parseInt
    let B: int = entry[1].parseInt
    let C: int = entry[2].parseInt
    let D: int = entry[3].parseInt

    if A + C == 180 and B + D == 180:
        stdout.writeLine "YES"
    else:
        stdout.writeLine "NO"
