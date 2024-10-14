import algorithm
import tables
import strutils

type array[T] = seq[T]
type map[K, V] = Table[K, V]
type str = string

# @author: Thawan, 2024-10-06
# @problem: Pass or Fail (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

let T: int = stdin.readLine.parseInt

for i in 1..T:
    let entry: array[str] = stdin.readLine.split
    
    let N: int = entry[^3].parseInt
    let X: int = entry[^2].parseInt
    let P: int = entry[^1].parseInt

    let mark: int = (X * 3) - (N - X)

    if P > mark:
        stdout.writeLine "FAIL"
    else:
        stdout.writeLine "PASS"
