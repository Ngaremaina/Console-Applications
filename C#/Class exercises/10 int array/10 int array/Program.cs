using System;

namespace _10_int_array
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[10];

            for (int n = 0; n < 10; n++)
            {
                arr[n] = n;
                Console.WriteLine("Array " + arr[n]);
            }
            
        }
    }
}
