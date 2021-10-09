using System;

namespace Multiplication_table_using_while
{/*Write a program to produce the following multiplication table using while.
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
            while (i <= 5)
            {
                int j = 1;
                while (j <= 6)
                {
                    Console.Write(i * j + "\t");
                    j++;
                }
                Console.WriteLine();
                i++;
            }
            
        }
    }
}
