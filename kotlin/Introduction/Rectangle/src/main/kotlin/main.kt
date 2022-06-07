import java.util.*

/*Write a program that accepts the width and length of a rectangle
and computes both it’s area and perimeter.*/
fun main(args: Array<String>) {
    val length:Float
    val width:Float
    val sc= Scanner(System.`in`)
    println("Enter the length")
    length = sc.nextFloat()
    println("Enter the width")
    width = sc.nextFloat()

    val area=length*width

    println("The area is $area")
}