using System;

namespace Fees
{
    class Program
    {
        static void Main(string[] args)
        {
            double fees, yr;
            yr = 0;
            
            
            for (fees=10000; fees<=20000; fees *= 1.07)
            {
                yr=yr+1;
            }
            Console.WriteLine("After "+yr+ "years");
        }
    }
}
