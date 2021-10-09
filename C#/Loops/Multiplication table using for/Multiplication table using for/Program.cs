using System;

namespace Multiplication_table_using_for
{/* Write a program to produce the following multiplication table using for.
*    1    2    3    4    5    6
1    1    2    3    4    5    6
2    2    4    6    8    10   12
3    3    6    9    12   15   18
4    4    8    12   16   20   24
5    5    10   15   20   25   30

  */
    class Program
    {
        static void Main(string[] args)
        {
            for (int i = 1; i <= 5; i++)
            {
                for (int j = 1; j <= 6; j++)
                {
                    Console.Write(i*j+"\t");
                }
                Console.WriteLine();
            }

            
        }
    }
}
