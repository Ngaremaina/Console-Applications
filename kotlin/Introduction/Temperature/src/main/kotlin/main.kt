import java.util.*

/*Write a program that accepts temperature in degrees Celsius
and converts and outputs it in degrees Fahrenheit.
 */
fun main(args: Array<String>) {
    val temperature:Float
    val sc= Scanner(System.`in`)
    println("Enter the temperature in celsius")
    temperature=sc.nextFloat()
    val fahrenheit:Float= temperature * 9 / 5 + 32

    println("The temperature is $fahrenheit F")


}