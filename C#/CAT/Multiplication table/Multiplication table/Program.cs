using System;

namespace Multiplication_table
{
    class Program
    {
        static void Main(string[] args)
        {
            int i,j;

            i = 1;

            do
            {
                j = 1;        
                do
                {
                    Console.Write("\t"+i * j);

                    j = j + 1;
                }
                while (j <= 7);
                Console.WriteLine();

                i = i + 1;

            }
             
            while (i <= 7);
            




        }
    }
}
