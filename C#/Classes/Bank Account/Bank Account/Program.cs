using System;

namespace Bank_Account
{
    class Program
    {
        static void Main(string[] args)
        {
            int choice;
            Bank_Account bank = new Bank_Account();

            for (int i = 0; i < 3; i++)
            {
                bank.input();
                Console.WriteLine("Do you wish to deposit or withdraw?");
                Console.WriteLine("Choose appropriately:\n1.Deposit\n2.Withdraw");
                choice = int.Parse(Console.ReadLine());
                if (choice == 1)
                {
                    bank.deposit();
                }
                else if (choice == 2)
                {
                    bank.withdraw();
                }
                else { Console.WriteLine("Invalid choice"); }


                bank.display();
            }
            
        }
    }
}
