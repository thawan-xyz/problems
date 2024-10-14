fun main() {
    val numberOfEvents = readln().toInt()
    val listOfEvents = readln().split(" ").map { x -> x.toInt() }

    var numberOfPoliceOfficers = 0
    var numberOfUntreatedCrimes = 0

    for (currentEvent in listOfEvents) {
        when {
            currentEvent != -1 -> numberOfPoliceOfficers += currentEvent
            numberOfPoliceOfficers != 0 -> numberOfPoliceOfficers -= 1
            else -> numberOfUntreatedCrimes += 1
        }
    }

    println(numberOfUntreatedCrimes)
}
