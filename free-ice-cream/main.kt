fun main() {
    val (n, x) = readln().split(" ")
    val numberOfPeople = n.toInt(); var numberOfIceCreams = x.toLong()

    var numberOfDistressedPeople = 0
    repeat(numberOfPeople) {
        val (o, d) = readln().split(" ")
        val currentOperation = o.toString(); val currentIceCream = d.toInt()

        if (currentOperation == "+") {
            numberOfIceCreams += currentIceCream
        }
        else if (currentOperation == "-") {
            if (currentIceCream > numberOfIceCreams) {
                numberOfDistressedPeople += 1
            }
            else {
                numberOfIceCreams -= currentIceCream
            }
        }
    }

    println("$numberOfIceCreams $numberOfDistressedPeople")
}
