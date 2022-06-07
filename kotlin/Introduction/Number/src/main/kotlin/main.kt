import java.util.*

/*Write a program that accepts a number and then outputs it’s square,
cube, square root and cube root.
 */
fun main(args: Array<String>) {
    val number:Double
    val sc= Scanner(System.`in`)
    println("Enter your number")
    number=sc.nextDouble()

    val square: Double =Math.pow(number, 2.0)
    val cube: Double =Math.pow(number, 3.0)
    val squareroot:Double =Math.sqrt(number)
    val cuberoot: Double=Math.cbrt(number)

    println("The square is $square, the cube is $cube, the square root is $squareroot and the cube root is $cuberoot")

}