fun main() {
    val numberOfWords = readln().toInt()
    repeat(numberOfWords) {
        val currentWord = readln()
        val currentWordLength = currentWord.length

        val abbreviatedWord = if (currentWordLength > 10) {
            "${currentWord.first()}${currentWordLength - 2}${currentWord.last()}"
        }
        else {
            currentWord
        }

        println(abbreviatedWord)
    }
}
