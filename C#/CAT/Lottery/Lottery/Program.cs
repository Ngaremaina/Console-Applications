using System;

namespace Lottery
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, jackpot;
            int number,x,y;

            Random rand = new Random();

            jackpot = rand.Next(10, 99);

            Console.WriteLine(jackpot);

            Console.WriteLine("Enter your lucky number");
            number = int.Parse(Console.ReadLine());

            x = number / 10;
            y = number % 10;

            num1 = jackpot / 10;
            num2 = jackpot % 10;


            

            if (number == jackpot)
            {
                Console.WriteLine("Award is 10,000");
            }

            else if (num1 == y  && num2 == x )
            {
                { Console.WriteLine("Award is 3000"); }

            }

            else if (num1==x || num2 == y || num1==y || num2==x)
            {
                Console.WriteLine("Award is 1000");
            }
            else { Console.WriteLine("Sorry try again later"); }
            



        }
    }
}
