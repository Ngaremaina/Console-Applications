import java.util.*

/*Write a program that computes the area of a right-angled triangle.*/
fun main(args: Array<String>) {
    val base:Float
    val height:Float
    val hypotenuse:Float
    val sc= Scanner(System.`in`)
    println("Enter the base")
    base = sc.nextFloat()
    println("Enter the height")
    height = sc.nextFloat()
    println("Enter the hypotenuse")
    hypotenuse = sc.nextFloat()

    val area: Double = 0.5 * base * height
    val perimeter: Float = base + height + hypotenuse

    println("The area = $area and the perimeter = $perimeter")


}