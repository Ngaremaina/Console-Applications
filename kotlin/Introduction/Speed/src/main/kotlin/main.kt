import java.util.*

/*Write a program that accepts distance traveled in metres and the time taken in minutes
and then outputs the speed in kilometers per hour (km/h).
E.g. if someone enters a distance (in metres) of 500 and a time (in minutes) of 15
the output for speed should be 2 km/h.*/
fun main(args: Array<String>) {
    val distance:Float
    val time:Float
    val sc= Scanner(System.`in`)
    println("Enter the distance")
    distance = sc.nextFloat()
    println("Enter the time")
    time = sc.nextFloat()
    val km:Float =distance/1000
    val hr:Float =time/60
    val speed:Float=km/hr

    println("The speed is $speed km/hr")

}