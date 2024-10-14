import kotlin.math.*

fun main() {
    val numberOfChildren = readln().toInt()
    val listOfChildren = readln().split(" ").toMutableList()

    val numberOfGroups = min(listOfChildren.count{x -> x == "1"}, min(listOfChildren.count{x -> x == "2"}, listOfChildren.count{x -> x == "3"}))
    println(numberOfGroups)

    var programmingChild = 0; var mathChild = 0; var athleteChild = 0
    repeat(numberOfGroups) {
        programmingChild = listOfChildren.indexOf("1")
        listOfChildren[programmingChild] = "0"

        mathChild = listOfChildren.indexOf("2")
        listOfChildren[mathChild] = "0"

        athleteChild = listOfChildren.indexOf("3")
        listOfChildren[athleteChild] = "0"

        println("${programmingChild + 1} ${mathChild + 1} ${athleteChild + 1}")
    }
}