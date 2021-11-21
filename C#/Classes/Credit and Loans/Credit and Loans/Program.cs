using System;

namespace Credit_and_Loans
{/*Write a program that will make use of a class called Credit to determine if a department store customer has exceeded
  * the credit limit on charge account for each customer, the following facts are available:
	Account Number.
	Balance at the beginning of the month.
	Total of all items charged by this customer this month.
	Total of all credits applied to this customer account this month.
	Credit Limit.
The program should input each of those facts, calculate balance (= beginning balance + charges – credits)
    and determine if the new balance exceeds the customers credit limit. 
    For those customers whose credit limit is exceeded the program should display the message “Credit Limit Exceeded” 
    otherwise the message “Within the credit limit” should be displayed. 
    The program should include a loop that lets the user repeat this calculation until he or she is through. 
    NB: 1) The computations should be done for a customer at a time. 
    2) Assume that the user doesn’t know exactly how many customers he’s going to work with when he is starting.
    So don’t ask him/her “How many customers…”                                                                                           

  */
    class Program
    {
        static void Main(string[] args)
        {
            Credit cr = new Credit();
            for (int i = 1; i <= 1000; i++)
            {
                Console.WriteLine("Customer " + i);
                cr.input();
                cr.compute();
            }
        }
    }
}
