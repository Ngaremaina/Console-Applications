using System;
using System.Collections.Generic;
using System.Text;

namespace Credit_and_Loans
{
    class Credit
    {
        private int account_number, amount,charges,credits,creditlimit, balance;

        public void input()
        {
            Console.WriteLine("Enter the account number");
            account_number = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the beginning balance");
            amount = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the total charges");
            charges = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the total credits");
            credits = int.Parse(Console.ReadLine());

        }
        public void compute()
        {
            balance= amount + charges - credits;
            creditlimit = 50000;

            if (balance > creditlimit)
                Console.WriteLine("Credit Limit Exceeded");
            else
                Console.WriteLine("Within the credit limit");
        }


    }
}
