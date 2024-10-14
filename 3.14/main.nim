import algorithm
import strutils
import tables

type str = string
type array[T] = seq[T]
type map[K, V] = Table[K, V]

# @author: Thawan, 2024-10-04
# @problem: [ABC314] - 3.14 (AtCoder)
# @url: https://atcoder.jp/contests/abc314

const X: str = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679"

let N: int = stdin.readLine.parseInt

stdout.writeLine X.substr(0, N + 1)
