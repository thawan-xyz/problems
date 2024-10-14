import std / algorithm
import std / strutils
import std / sequtils
import std / tables
import std / math

type str = string
type array[T] = seq[T]
type map[K, V] = Table[K, V]

# @author: Thawan, 2024-10-06
# @problem: Endless Appetizers (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

let T: int = stdin.readLine.parseInt

for _ in 0 ..< T:
    let read: array[int] = stdin.readLine.split.map(parseInt)
    
    let X: int = read[0]
    let Y: int = read[1]
    let R: int = read[2]

    let Z: int = (R / 30).toInt

    let write: int = ceil((X + Z) / Y).toInt

    stdout.writeLine write
