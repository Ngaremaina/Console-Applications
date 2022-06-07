import java.util.*

/*Write a complete program that will read the three values for Deposit,
interest rate and number of years and amount of money is being saved.
Your program should the compute the cumulative compound interest over the given period of years.
NB: Don’t use the formula for calculating compound interest.
Use loops instead.
For example, if the deposit is 10000 and the interest is 10 percent and the money
is being saved for ten years,
the output should take the format shown below (including number of decimal places)
Year                      Interest                     Balance
   1                         1000.00                    11000.00
   2                         1100.00	         12100.00
   3                         1210.00                    13310.00
  ….
  10                        2357.94                    25937.42
The compounded interest for 10 years is Kshs. 15937.42
The balance in the account after 10 years at 10.00 percent interest is Kshs. 25937.42

* */
fun main(args: Array<String>) {
    val amount = 10000.0F
    var years = 1
    val rate =0.1F

    println("Year\t\t\tInterest\t\t\tBalance")

    do {
        val balance: Double =amount*Math.pow(1.0+rate, years.toDouble())
        val interest:Double =balance+amount

        println("$years \t\t\t $interest \t\t\t $balance")

        years++

    }while (years<=10)



}