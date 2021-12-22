using System;

namespace _2_dimension_array
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] arr = new int[9,9];
            int i, j;

            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    arr[i,j] = j*5;
                    
                    Console.Write("Array " + arr[i, j]);
                }
                Console.WriteLine();
            }
            arr[2, 3] = 54;

            arr[2, 3] += 5;
            Console.WriteLine("Array " + arr[2, 3]);

          
        }
    }
}
