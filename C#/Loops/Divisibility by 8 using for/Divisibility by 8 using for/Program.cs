using System;

namespace Divisibility_by_8_using_for
{
    class Program
    {/*Write a program that displays all numbers divisible by 8 between 1 and 200 using for… loop*/
        static void Main(string[] args)
        {
            int i;
            for (i = 1; i <= 200; i++)
            {
                if (i % 2 == 0)
                {
                    Console.Write(i+"\t");
                }
            }
            
        }
    }
}
