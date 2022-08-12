import java.util.*

fun main(args: Array<String>){
    var integers=arrayOf<Array<Integer>>()

    for (i in 1..4){
        for (i in 1..4){
            integers
        }
    }

    val numbers = Array(20) { IntArray(20) }
    val number: Int
    val sc = Scanner(System.`in`)
    println("Enter the table form")
    number = sc.nextInt()
    for (i in 1..number) {
        for (j in 1..number) {
            numbers[i][j] = i * j
            print(numbers[i][j].toString() + "\t")
        }
        println()
    }
    /*
    var cinema=arrayOf<Array<Int>>()

    for (i in 0..4){
        var array=arrayOf<Int>()
        for (j in 0..4){
            array+=10
        }
        cinema+=array
    }
    for (array in cinema){
        for (value in array){
            print("$value")
        }
        println()
    }*/


}