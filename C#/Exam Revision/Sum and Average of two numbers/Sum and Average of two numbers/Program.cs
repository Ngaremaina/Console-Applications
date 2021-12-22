using System;

namespace Sum_and_Average_of_two_numbers
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, sum, average;
            
            Console.WriteLine("Enter two integers");
            num1 = int.Parse(Console.ReadLine());
            num2 = int.Parse(Console.ReadLine());
            sum = num1 + num2;
            average = sum / 2;
            Console.WriteLine("The sum is " + sum + " and the average is " + average);
        }
    }
}
