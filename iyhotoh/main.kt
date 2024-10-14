import java.io.*
val read = System.`in`.bufferedReader()
val print = PrintWriter(System.out.bufferedWriter())

fun main() {
    val setOfColors = read.readLine().split(" ").toSet();
    print.write("${4 - setOfColors.size}"); print.close();
}