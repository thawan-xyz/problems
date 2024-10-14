fun main() {
    val numberOfWires = readln().toInt()
    val birdsOnWires = readln().split(" ").map(String::toInt).toMutableList()

    val numberOfShots = readln().toInt()
    repeat(numberOfShots) {
        var (wireIndex, birdPosition) = readln().split(" ").map(String::toInt); wireIndex -= 1

        if (wireIndex != 0) {
            birdsOnWires[wireIndex - 1] += birdPosition - 1
        }
        if (wireIndex != birdsOnWires.lastIndex) {
            birdsOnWires[wireIndex + 1] += birdsOnWires[wireIndex] - birdPosition
        }
        birdsOnWires[wireIndex] = 0
    }

    for (birds in birdsOnWires) {
        println(birds)
    }
}
