using System;

namespace Three_Numbers
{
    class Program
    {/*Write a program that accepts three numbers and computes their sum, product and average. */
        static void Main(string[] args)
        {
            int number_one, number_two, number_three, sum, product, average;

            Console.WriteLine("Enter the three integers");
            number_one = int.Parse(Console.ReadLine());
            number_two = int.Parse(Console.ReadLine());
            number_three = int.Parse(Console.ReadLine());

            sum = number_one + number_two + number_three;
            product = number_one * number_two * number_three;

            average = sum / 3;
            Console.WriteLine("The sum is " + sum + " , product is " + product + " and average is " + average);
            Console.ReadKey();
        }
    }
}
