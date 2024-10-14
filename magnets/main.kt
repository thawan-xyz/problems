fun main() {
    val numberOfMagnets = readln().toInt()
    var numberOfGroups = 1

    var previousMagnet = readln().toInt()
    var currentMagnet = previousMagnet

    repeat(numberOfMagnets - 1) {
        currentMagnet = readln().toInt()

        if (currentMagnet != previousMagnet) {
            previousMagnet = currentMagnet
            numberOfGroups += 1
        }
    }

    println(numberOfGroups)
}