using System;

namespace Even_and_Odd_Numbers
{
    class Program
    {
        public void divisibility(int number)
        {
            if (number % 2 == 0)
                Console.WriteLine("Even");
            else
                Console.WriteLine("Odd");
        }
        static void Main(string[] args)
        {
            Program div = new Program();
            int num;
            Console.WriteLine("Enter a number");
            num = int.Parse(Console.ReadLine());

            div.divisibility(num);

        }
    }
}
