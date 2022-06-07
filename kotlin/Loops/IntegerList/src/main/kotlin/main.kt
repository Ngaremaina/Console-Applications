import java.util.*

/*Write a program that accepts a list of integers and computes their sum.
The program should allow the user to enter any number of integers
but an input of zero should terminate the list.
For example if the user enters 2 5 6 12 8 2 0 the sum should be 35.
If he/she enters 2 4 5 0 the sum should be 11 and if he enters 5 4 6 0 12 43 2
the sum should 15 i.e. only numbers before zero are summed.
The rest are ignored and the program terminated.
 */
fun main(args: Array<String>) {
    val i=0
    var sum = 0
    val elements: Int
    var input: Int
    val scanner= Scanner(System.`in`)

    println("Enter the number of elements")
    elements = scanner.nextInt()

    println("Enter the integers");
    do {
        input = scanner.nextInt()
        sum +=input
        if (input == 0){
            break
        }
    }while (i<=elements)
    println(sum)

}