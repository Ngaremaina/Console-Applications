import java.util.*

/*Write a program that accepts the radius of a circle and computes both it’s area and circumference.*/
fun main(args: Array<String>) {
    val radius:Float
    val sc= Scanner(System.`in`)
    println("Enter the radius")
    radius = sc.nextFloat()
    val area: Double =Math.PI*radius*radius
    val circumference:Double =2*Math.PI*radius

    println("The perimeter of the circle is $circumference and the area is $area")
}