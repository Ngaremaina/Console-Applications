/*A program is required that computes the square and cube of all numbers between 2 and 10
and display them using a loop. The output should take the following format.
        Number      Square          Cube
        2                4                   8
        3                9                 27
        …
        10            100              1000
        Write the program using do while, while and for
        NB: The program has no input.*/
fun main(args: Array<String>) {
    var number = 2
    var square:Double
    var cube:Double

    println("Number\tSquare\tCube\t")
    /*while (number<=10){
        square=Math.pow(number.toDouble(), 2.0)
        cube=Math.pow(number.toDouble(), 3.0)

        println("$number\t$square\t$cube")

        number++

    }*/

   /* for (number in 2..10){
        square=Math.pow(number.toDouble(), 2.0)
        cube=Math.pow(number.toDouble(), 3.0)

        println("$number\t$square\t$cube")


    }*/
   do {
        square=Math.pow(number.toDouble(), 2.0)
        cube=Math.pow(number.toDouble(), 3.0)

        println("$number\t$square\t$cube")

        number++

    }while (number<=10)


}