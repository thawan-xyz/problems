fun main() {
    val stones = readln()
    val instructions = readln()

    var position = 1
    for (instruction in instructions) {
        if (stones[position - 1] == instruction) {
            position += 1
        }
    }

    println(position)
}
