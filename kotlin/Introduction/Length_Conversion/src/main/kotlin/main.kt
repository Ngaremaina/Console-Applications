import java.util.*

/*Write a program that accepts measurements in kilometers and the converts and displays them in metres.
E.g. if someone enters 0.4 (kilometers) the output should take the form
 0.4 kilometers = 400 metres.
 */
fun main(args: Array<String>) {
    val distance:Float
    val sc: Scanner=Scanner(System.`in`)
    println("Enter the distance in km")
    distance=sc.nextFloat()
    val meters:Float = distance*1000

    println("The distance is $meters")
}