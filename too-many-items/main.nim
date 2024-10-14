import std / algorithm
import std / strutils
import std / tables
import std / math

type str = string
type array[T] = seq[T]
type map[K, V] = Table[K, V]

# @author: Thawan, 2024-10-06
# @problem: Too Many Items (CodeChef)
# @url: https://www.codechef.com/practice/logical-problems

let T: int = stdin.readLine.parseInt

for i in 0..<T:
    let N: int = stdin.readLine.parseInt

    stdout.writeLine ceil(N / 10).toInt
