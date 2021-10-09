using System;

namespace Sum_of_squares_using_while
{
    class Program
    {/*Write a program that computes the sum of the squares of the first 15 positive integers 
      * and display the results using while… loop.               

      */
        static void Main(string[] args)
        {
            int i=1;
            double square, sum=0;

            while (i <= 15)
            {
                square = Math.Pow(i, 2);
                sum = sum + square;
                i++;

            }
            Console.WriteLine("The sum = " + sum);
        }
    }
}
