using System;

namespace Sum_of_Squares_using_for
{
    class Program
    {/*Write a program that computes the sum of the squares of the first 15 positive integers 
      * and display the results using for… loop.

      */
        static void Main(string[] args)
        {
            int i;
            double square, sum=0;
            
            for (i = 0; i <= 15; i++)
            {
                square = Math.Pow(i, 2);
                sum +=square;

            }
            Console.WriteLine("The sum = " + sum);
        }
    }
}
