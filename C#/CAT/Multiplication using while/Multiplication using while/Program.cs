using System;

namespace Multiplication_using_while
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, j;
            i = 1;
             while (i <= 7)
            {
                j = 1;
                while (j <= 7)
                {
                    Console.Write("\t"+i * j);
                    j = j + 1;

                }
                i = i + 1;


                Console.WriteLine();

                

            }
            



        }
    }
}
