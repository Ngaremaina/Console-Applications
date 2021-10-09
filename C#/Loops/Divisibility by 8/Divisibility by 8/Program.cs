using System;

namespace Divisibility_by_8
{
    class Program
    {
        static void Main(string[] args)
        {/*Write a program that displays all numbers divisible by 8 between 1 and 200 using do…while loop */
            int i=1;
            do {
                if (i % 2 == 0)
                {
                    Console.Write(i+"\t");
                }
                i++;
            }
            while (i <= 200);
            
        }
    }
}
