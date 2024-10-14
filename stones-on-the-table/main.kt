fun main() {
    val numberOfStones = readln().toInt()
    val listOfStones = readln()

    var numberOfTakenStones = 0

    var previousStone = 'X'
    for (currentStone in listOfStones) {
        if (currentStone == previousStone) {
            numberOfTakenStones += 1;
        }

        previousStone = currentStone
    }

    println(numberOfTakenStones)
}