fun main() {
    val caloriesPerStrip = readln().split(" ").map { x -> x.toInt() }
    val stripSequence = readln()

    var totalCalories = 0
    for (strip in stripSequence) {
        totalCalories += caloriesPerStrip[strip.digitToInt() - 1]
    }
    println(totalCalories)
}
