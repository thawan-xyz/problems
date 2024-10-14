import java.io.*
val read = System.`in`.bufferedReader()
val print = PrintWriter(System.out.bufferedWriter())

fun gcd(a: Int, b: Int): Int {
    var x = a
    var y = b
    var rest = 0

    while (y != 0) {
        rest = x % y
        x = y
        y = rest
    }

    return x
}

fun main() {
    val roll = 7 - read.readLine().split(" ").maxOf{x -> x.toInt()}

    val gcd = gcd(roll, 6)
    val probability = "${roll / gcd}/${6 / gcd}"

    print.write(probability); print.close()
}
