import java.util.*

/*Write a program that accepts measurements in cm and converts them into metres.
If someone enters 200 for example, the output should take the form:
        200 cm = 2 metres.*/
fun main(args: Array<String>) {
    val distance:Float;
    val sc=Scanner(System.`in`)

    println("Enter the distance in cm")
    distance=sc.nextFloat()
    val meters:Float=distance/100

    println("The distance is $meters")


}