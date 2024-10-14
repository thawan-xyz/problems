import algorithm
import strutils
import strformat
import strscans

type str = string
type list[T] = seq[T]

template read(): untyped = stdin.readLine()
template write(text: varargs[untyped]) = stdout.writeLine(text)

template range(start: int, stop: int, step: int = 1): untyped = countup(start, stop - 1, step)

# @author: Thawan Ribeiro, 2024-09-30
# @problem: [ABC373] - September (AtCoder)
# @url: https://atcoder.jp/contests/abc373

var x: int = 0

for i in range(0, 12):
    let s: str = read()

    if len(s) == i + 1:
        x += 1

write(x)
