using System;

namespace Multiplication_table_using_do_while
{/* Write a program to produce the following multiplication table using do...while.
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
            int i = 1;
            do {
                int j = 1;
                do {
                    Console.Write(i * j + "\t");
                    j++;
                }
                while (j <= 6);
                Console.WriteLine();
                i++;
            }
            while (i <= 5);
            
        }
    }
}
