import std / algorithm
import std / strutils
import std / sequtils
import std / tables

type str = string
type array[T] = seq[T]
type map[K, V] = Table[K, V]

# @author: Thawan, 2024-10-06
# @problem: Building Race (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

let T: int = stdin.readLine.parseInt

for i in 0..<T:
    let read: array[int] = stdin.readLine.split.map(parseInt)
    
    let A: int = read[0]
    let B: int = read[1]
    let X: int = read[2]
    let Y: int = read[3]

    let CHEF: float = A / X
    let CHEFINA: float = B / Y

    let write: str =
        if CHEF < CHEFINA:
            "CHEF"
        elif CHEF > CHEFINA:
            "CHEFINA"
        else:
            "BOTH"
    
    stdout.writeLine write
