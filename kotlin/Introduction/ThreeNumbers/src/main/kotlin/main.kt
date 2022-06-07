import java.util.*

/*Write a program that accepts three numbers and computes their sum, product and average. */
fun main(args: Array<String>) {
    val number1:Float
    val number2:Float
    val number3:Float

    val sc= Scanner(System.`in`)
    println("Enter the first number")
    number1 = sc.nextFloat()
    println("Enter the second number")
    number2 = sc.nextFloat()
    println("Enter the third number")
    number3 = sc.nextFloat()
    val sum:Float=number1 + number2 + number3
    val product:Float = number1 * number2 * number3
    val average:Float = sum/3
    println("Sum -> $sum, Product -> $product, Average -> $average")

}