import java.io.*
val read = System.`in`.bufferedReader()
val print = PrintWriter(System.out.bufferedWriter())

fun main() {
    val numbers = read.readLine().split("+").map(String::toInt).sorted()
    val result = numbers.joinToString("+")
    print.write(result); print.close()
}
