import java.util.*

/*Write a program that accepts the weight of a package in grams and then converts it to kilograms
and also specifies how many such packages form one kilogram.
For example, if the user enters the weight (in grams) of the package as 100, the output should be:
    The weight of the package is 0.1 kilograms.
    It takes 10 such packages to form one kilogram.
*/
fun main(args: Array<String>) {
    val weight:Float
    val sc= Scanner(System.`in`)

    println("Enter the weight in grams")
    weight = sc.nextFloat()
    val kg: Float = weight/1000
    val packet: Float = kg*100

    println("The weight of the package is $kg kilograms.")
    println("It takes $packet such packages to form one kilogram")
}