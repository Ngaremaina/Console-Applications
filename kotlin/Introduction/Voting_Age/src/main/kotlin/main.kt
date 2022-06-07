import java.util.*

/*Write a program that accepts the age of a person,
if the person is 18 and above, it should print You can vote.
otherwise it should print You are too young to vote.
 */
fun main(args: Array<String>) {
    val age:Int
    val sc= Scanner(System.`in`)
    println("Enter your age")
    age=sc.nextInt()
    if (age<18){
        println("You are too young")
    }
    else {println("You can vote")}
}