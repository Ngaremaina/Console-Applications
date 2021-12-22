using System;

namespace Multiplication_using_for
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, j;

            for (i=1; i<=7; i++)
            {
                for (j = 1; j <= 7; j++)
                {
                    Console.Write(i * j+"\t");
                }
                Console.WriteLine();
                
            }
        }
    }
}
