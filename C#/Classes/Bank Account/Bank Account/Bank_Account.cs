using System;
using System.Collections.Generic;
using System.Text;

namespace Bank_Account
{/*Create a class for ‘Bank Account’ abstract data type. It should have the attributes account number (integer), 
  * account holder (string) and current balance (float). Define methods to get and set account numbers and account holders
  * (total = 4). Add a method, which will return the account holder’s current balance. 
  * Finally, add two methods, which allow deposit and withdrawal of money updating the current balance as appropriate.
  * NB: Don’t add any other methods (member functions)
Using the ‘Bank Account’ class above, write a program to test these methods as follows: -
i) Create three bank accounts, two to start with balances 0.00 and one with 2,000.
ii) Set the account numbers to 101,102 and 103 respectively.
iii) Set names of account holders.
iv) Credit (deposit) account 101 with 2,000.00 and account 102 with 1,750.00.
v) Debit (withdraw) account 103 with 1,250.00 
vi) Display the account numbers, account holders and current balance for the three accounts.                                                                                                            

  */
    class Bank_Account
    {
        private int account_number;
        private string account_holder;
        private float balance, weka, toa;

        public int accnumber()
        {
            return account_number;
        }
        public string accholder()
        {
            return account_holder;
        }
        public float bal() { return balance; }
        public void input()
        {
            Console.WriteLine("Enter the account number");
            account_number = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter the account holder");
            account_holder = Console.ReadLine();
            Console.WriteLine("Enter the current balance");
            balance = float.Parse(Console.ReadLine());

        }

        public void deposit()
        {
            Console.WriteLine("Enter the amount to deposit");
            weka = float.Parse(Console.ReadLine());
            balance += weka;
        }
        public void withdraw()
        {
            Console.WriteLine("Enter the amount to withdraw");
            toa = float.Parse(Console.ReadLine());
            balance -= toa;

        }
        public void display()
        {
            Console.WriteLine("The account holder is " + account_holder + ", the account number is " + account_number);
            Console.WriteLine("The current balance is " + balance);
        }
    }
}
