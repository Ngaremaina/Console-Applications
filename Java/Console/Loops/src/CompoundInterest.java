/*Write a complete program that will read the three values for Deposit,
interest rate and number of years an amount of money is being saved.
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
public class CompoundInterest {
    public static void main(String[] args){
        double interest, balance, deposit, rate;
        int yrs;

        System.out.println("Year\t\t\tInterest\t\t\tBalance");

        deposit=10000;
        rate=0.1;
        yrs=1;


        do{
            balance=deposit* Math.pow(1.0 + rate, yrs);
            interest=balance+deposit;
            System.out.println(yrs+"\t\t\t"+interest+"\t\t\t"+balance);
            yrs++;
        }
        while (yrs<=10);
    }
}
