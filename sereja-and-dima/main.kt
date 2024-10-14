fun main() {
    val numberOfCards = readln().toInt()
    var listOfCards = (readln().split(" ").map { x -> x.toInt() }).toMutableList()

    var serejaPoints = 0
    var dimaPoints = 0

    var currentPlayer = 's'
    while (listOfCards.size != 0) {
        val firstValue = listOfCards[0]
        val lastValue = listOfCards[listOfCards.size - 1]

        val currentPoints = if (firstValue > lastValue) {
            listOfCards.removeFirst()
        } else {
            listOfCards.removeLast()
        }

        if (currentPlayer == 's') {
            serejaPoints += currentPoints
            currentPlayer = 'd'
        }
        else if (currentPlayer == 'd') {
            dimaPoints += currentPoints
            currentPlayer = 's'
        }
    }

    println("$serejaPoints $dimaPoints")
}
