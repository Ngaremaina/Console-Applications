using System;

namespace Jagged_Arrays
{
    class Program
    {
        static void Main(string[] args)
        {
            int[][] array = new int[3][];
            array[0] = new int[] { 45, 46, 49 };
            array[1] = new int[] { 54 };
            array[2] = new int[] { 50, 51, 52, 53, 54 };

            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine(array[2][i]);
            }
        }
    }
}
