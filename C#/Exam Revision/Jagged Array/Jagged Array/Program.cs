using System;

namespace Jagged_Array
{
    class Program
    {
        static void Main(string[] args)
        {
            int [][] arr=new int[2][];
            arr[0]=new int[]{92,93,94 };
            arr[1] = new int[] { 85, 86, 87, 88 };

            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine(arr[0][i]);
            }
            for (int i = 0; i < 4; i++)
            {
                Console.WriteLine(arr[1][i]);
            }
            
        }
    }
}
