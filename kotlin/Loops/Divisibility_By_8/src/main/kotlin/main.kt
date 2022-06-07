/*
Write a program that displays all numbers divisible by 8 between 1 and 200 using do while and for
 */
fun main(args: Array<String>) {
    var i = 0
   do {
        if (i % 8 == 0) {
            print("$i, ")
        }
        i++
    } while (i <= 200)


    for (i in 1..200){
        if (i % 8 == 0){
            print("$i, ")
        }
     }



}